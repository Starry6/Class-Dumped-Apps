@interface CXCallDirectoryStoreMigrator : NSObject
@property (nonatomic) CXCallDirectoryStore store;
@property (nonatomic) @? storeCreationBlock;
@property (nonatomic) @? retrieveExtensionBlock;
- (id)init;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
- (id)performMigrationsWithError:;
- (id)_performMigrationsStartingAtSchemaVersion:error:;
- (id)storeCreationBlock;
- (void)setStoreCreationBlock:;
- (id)retrieveExtensionBlock;
- (void)setRetrieveExtensionBlock:;
@end
