
/* **Electricity Bill calculator**
This calculator will include: The three core pillars of c programming
 1. accacurate mathematical tiering
 2. dynamic user inputs 
 3. actionable output analytics.

*/
	
#include <stdio.h>
#include <string.h>

#define MAX_APPLIANCES 10
#define DAYS_IN_MONTH 30

// Structure to hold applian,ce data
typedef struct {
    char name[30];
    double wattage;
    double hours_per_day;
    double monthly_kwh;
    double monthly_cost;
} Appliance;

// Structure for slab-based tariff tiers
typedef struct {
    double limit; // Upper limit of the slab (e.g., 100 units)
    double rate;  // Cost per unit (kWh) in this slab
} TariffTier;

// Global configuration for the utility company (Example configuration)
const double FIXED_CHARGE = 150.00;      // Flat monthly grid connection fee
const double TAX_PERCENT = 8.5;          // Government electricity duty tax (%)
const double FUEL_SURCHARGE_PER_KWH = 0.25; // Variable fuel surcharge per unit

// Dynamic tariff slab array (terminated by a limit of -1 for the final open slab)
const TariffTier tariff_grid[] = {
    {100, 3.50},  // 0 - 100 units: ?3.50 / unit
    {300, 5.00},  // 101 - 300 units: ?5.00 / unit
    {500, 7.50},  // 301 - 500 units: ?7.50 / unit
    {-1,  10.00}  // 501+ units: ?10.00 / unit
};

// Function prototypes
double calculate_slab_energy_charge(double total_kwh);
void generate_savings_recommendations(Appliance apps[], int count);

int main() {
    Appliance appliances[MAX_APPLIANCES];
    int appliance_count = 0;
    double total_monthly_kwh = 0.0;
    int i;
    
    printf("=========================================\n");
    printf("    ADVANCED ELECTRICITY BILL CALCULATOR \n");
    printf("=========================================\n\n");
    
    // 1. Dynamic Input Profiler Loop
    while (appliance_count < MAX_APPLIANCES) {
        printf("Enter details for appliance #%d (or type 'exit' as name to finish):\n", appliance_count + 1);
        printf("  Appliance Name: ");
        scanf("%s", appliances[appliance_count].name);
        
        if (strcmp(appliances[appliance_count].name, "exit") == 0) {
            break;
        }
        
        printf("  Wattage (Watts): ");
        scanf("%lf", &appliances[appliance_count].wattage);
        
        printf("  Average Usage (Hours/Day): ");
        scanf("%lf", &appliances[appliance_count].hours_per_day);
        
        // Math Engine: Convert Watt-Hours to Monthly Kilowatt-Hours (kWh)
        appliances[appliance_count].monthly_kwh = 
            ((appliances[appliance_count].wattage * appliances[appliance_count].hours_per_day) / 1000.0) * DAYS_IN_MONTH;
        
        total_monthly_kwh += appliances[appliance_count].monthly_kwh;
        appliance_count++;
        printf("\n");
    }
    
    if (appliance_count == 0) {
        printf("No appliances entered. Exiting program.\n");
        return 0;
    }

    // 2. Compute Core Financials
    double energy_charge = calculate_slab_energy_charge(total_monthly_kwh);
    double fuel_surcharge = total_monthly_kwh * FUEL_SURCHARGE_PER_KWH;
    double tax_amount = (energy_charge + fuel_surcharge + FIXED_CHARGE) * (TAX_PERCENT / 100.0);
    double total_bill = energy_charge + fuel_surcharge + FIXED_CHARGE + tax_amount;
    // Assign rough billing shares to individual appliances for optimization reports
    double average_cost_per_kwh = (total_monthly_kwh > 0) ? (energy_charge / total_monthly_kwh) : 0;
    for ( i = 0; i < appliance_count; i++) {
        appliances[i].monthly_cost = appliances[i].monthly_kwh * (average_cost_per_kwh + FUEL_SURCHARGE_PER_KWH);
    }

    // 3. Print Comprehensive Billing Statement
    printf("\n=========================================\n");
    printf("           MONTHLY INVOICE STATEMENT      \n");
    printf("=========================================\n");
    printf("%-15s %-10s %-12s\n", "Appliance", "Total kWh", "Est. Cost");
    printf("-----------------------------------------\n");
    for (i = 0; i < appliance_count; i++) {
        printf("%-15s %-10.2f ?%-12.2f\n", 
               appliances[i].name, appliances[i].monthly_kwh, appliances[i].monthly_cost);
    }
    printf("-----------------------------------------\n");
    printf("Total Energy Consumption : %.2f kWh\n", total_monthly_kwh);
    printf("Base Energy Charge (Slab): ?%.2f\n", energy_charge);
    printf("Fixed/Demand Charge      : ?%.2f\n", FIXED_CHARGE);
    printf("Fuel Adjustment Charge   : ?%.2f\n", fuel_surcharge);
    printf("Electricity Tax (%g%%)   : ?%.2f\n", TAX_PERCENT, tax_amount);
    printf("-----------------------------------------\n");
    printf("TOTAL ESTIMATED BILL     : ?%.2f\n", total_bill);
    printf("=========================================\n\n");

    // 4. Optimization Engine
    generate_savings_recommendations(appliances, appliance_count);

    return 0;
}

// Function to calculate slab-based progressive costs
double calculate_slab_energy_charge(double total_kwh) {
    double remaining_kwh = total_kwh;
    double total_charge = 0.0;
    double previous_limit = 0.0;
    int i = 0;
    
    while (remaining_kwh > 0) {
        // If limit is -1, it means we are in the highest infinite tier
        if (tariff_grid[i].limit == -1) {
            total_charge += remaining_kwh * tariff_grid[i].rate;
            break;
        }
        
        double slab_width = tariff_grid[i].limit - previous_limit;
        
        if (remaining_kwh > slab_width) {
            total_charge += slab_width * tariff_grid[i].rate;
            remaining_kwh -= slab_width;
        } else {
            total_charge += remaining_kwh * tariff_grid[i].rate;
            remaining_kwh = 0;
        }
        
        previous_limit = tariff_grid[i].limit;
        i++;
    }
    
    return total_charge;
}

// Function to generate "What-if" savings metrics
void generate_savings_recommendations(Appliance apps[], int count) {
    printf("=========================================\n");
    printf("     SMART POWER-SAVING INSIGHTS         \n");
    printf("=========================================\n");
    printf("What if you reduce usage by 1 hour daily?\n\n");
    int i;
    for (i = 0; i < count; i++) {
        if (apps[i].hours_per_day > 1.0) {
            // Calculate new kWh tracking 1 hour reduction
            double daily_saved_kwh = apps[i].wattage / 1000.0;
            double monthly_saved_kwh = daily_saved_kwh * DAYS_IN_MONTH;
            
            // Approximate cost savings based on appliance raw weight
            double unit_saving_cost = apps[i].monthly_cost * (monthly_saved_kwh / apps[i].monthly_kwh);
            
            printf(" * Cutting back on [%s] saves %.2f units & ~?%.2f/month.\n", 
                   apps[i].name, monthly_saved_kwh, unit_saving_cost);
        } else {
            printf(" * [%s] is already optimized (< 1 hour usage).\n", apps[i].name);
        }
    }
    printf("=========================================\n");
}


