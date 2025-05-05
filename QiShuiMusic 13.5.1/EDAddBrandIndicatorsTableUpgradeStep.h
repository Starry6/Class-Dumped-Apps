@interface EDAddBrandIndicatorsTableUpgradeStep : NSObject
+ (id)_brandIndicatorsTableSchema;
+ (int)runWithConnection:databaseName:;
@end
