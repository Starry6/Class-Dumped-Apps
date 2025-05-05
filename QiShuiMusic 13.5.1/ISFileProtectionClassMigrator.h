@interface ISFileProtectionClassMigrator : NSObject
+ (BOOL)migrate;
+ (BOOL)isMigrationNeeded;
+ (void)setMigrationNeededIfNotSet:;
@end
