@interface APKKeychainBindingsController : NSObject
- (id)keychainBindings;
- (void)setValue:forKeyPath:accessibleAttribute:;
- (BOOL)storeString:forKey:;
- (BOOL)storeString:forKey:accessibleAttribute:;
- (id)init;
- (id)values;
- (id)serviceName;
- (id)stringForKey:;
- (id)valueForKeyPath:;
- (void)setValue:forKeyPath:;
- (void).cxx_destruct;
+ (id)sharedKeychainBindingsController;
@end
