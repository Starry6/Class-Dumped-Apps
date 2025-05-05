@interface MFUserDefaultMigrator : NSObject
+ (id)log;
+ (id)oldKeysToNewKeysMap;
+ (id)_keysToMigrateToSharedAppGroup;
+ (void)_migrateExtPropertiesPlist;
+ (BOOL)migratePreferencesToSharedAppGroup;
+ (void)migrateDefaults:;
+ (void)migrateDefaultsFromOldKeysToNewKeys:;
+ (void)migratePropertyForOldKey:newKey:;
+ (id)currentDeviceIdentifer;
+ (id)mobileMailDefaultForKey:;
+ (void)removeMobileMailDefaultForKey:;
@end
