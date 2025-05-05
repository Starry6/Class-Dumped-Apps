@interface PADatabaseManager : HCDatabaseManager
- (void)logMessage:;
- (id)currentConfiguration;
- (id)containerIdentifier;
- (id)cloudKitContainer;
- (id)managedObjectModelName;
- (void)contentDidUpdate:;
- (BOOL)saveConfiguration:;
+ (id)sharedManager;
@end
