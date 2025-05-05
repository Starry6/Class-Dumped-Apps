@interface AAFKeychainManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)addKeychainItem:error:;
- (void)addOrUpdateKeychainItem:error:;
- (void)updateKeychainItem:error:;
- (id)keychainItemForDescriptor:error:;
- (id)keychainItemsForDescriptor:error:;
- (void)deleteKeychainItemsForDescriptor:error:;
- (void)_unsafe_addKeychainItem:shouldAttemptUpdate:error:;
- (BOOL)_unsafe_updateKeychainItemWithDescriptor:newItem:error:;
- (id)_unsafe_fetchKeychainItemWithDescriptor:error:;
- (id)_unsafe_fetchKeychainItemsWithDescriptor:error:;
- (BOOL)_unsafe_deleteKeychainItemWithDescriptor:error:;
@end
