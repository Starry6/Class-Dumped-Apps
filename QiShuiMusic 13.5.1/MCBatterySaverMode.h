@interface MCBatterySaverMode : NSObject
+ (BOOL)isBatterySaverModeActive;
+ (id)setOfActiveRestrictionUUIDs;
+ (BOOL)isBatterySaverModeActive:;
+ (id)batterySaverRestrictions;
+ (id)currentBatterySaverRestrictions;
+ (id)currentBatterySaverRestrictions:;
@end
