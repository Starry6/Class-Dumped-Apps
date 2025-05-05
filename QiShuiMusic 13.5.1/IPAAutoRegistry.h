@interface IPAAutoRegistry : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)registerAutoCalculatorSettingsClass:toAutoIdentifier:operationIdentifier:;
- (void)registerAutoCalculatorSettingsClass:toAutoIdentifier:operationIdentifier:persistable:;
- (id)_entryForAutoIdentifier:operationIdentifier:;
- (BOOL)hasMappingForAutoIdentifier:operationIdentifier:;
- (Class)settingsClassForAutoIdentifier:operationIdentifier:;
- (BOOL)isPersistableAutoIdentifier:forOperationIdentifier:;
+ (id)sharedRegistry;
+ (void)setSharedRegistry:;
@end
