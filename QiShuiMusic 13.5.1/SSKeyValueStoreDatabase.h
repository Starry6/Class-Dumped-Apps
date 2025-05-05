@interface SSKeyValueStoreDatabase : NSObject
- (void)readUsingSessionBlock:;
- (void)modifyUsingTransactionBlock:;
- (id)init;
- (void)dealloc;
- (id)_initReadOnly:;
- (id)initReadOnly;
- (void)modifyAsyncUsingTransactionBlock:;
- (void)readAsyncUsingSessionBlock:;
- (void)_dispatchBlockAsync:;
@end
