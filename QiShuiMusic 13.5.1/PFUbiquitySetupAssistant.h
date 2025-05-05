@interface PFUbiquitySetupAssistant : NSObject
- (id)init;
- (void)dealloc;
- (void)coordinatorWillRemoveStore:;
- (void)ubiquityIdentityTokenChanged:;
- (void)exportedLog:;
- (id)initWithPersistentStoreCoordinator:andStoreOptions:forPersistentStoreOfType:atURL:;
@end
