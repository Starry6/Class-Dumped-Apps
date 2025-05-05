@interface CPLEngineScopedTask : CPLEngineSyncTask
@property (nonatomic) NSString clientCacheIdentifier;
@property (nonatomic) CPLEngineScope scope;
@property (nonatomic) NSData transportScope;
@property (nonatomic) CPLEngineStore store;
- (id)scope;
- (id)clientCacheIdentifier;
- (void).cxx_destruct;
- (id)store;
- (BOOL)checkScopeIsValidInTransaction:;
- (id)initWithEngineLibrary:session:clientCacheIdentifier:scope:transportScope:;
- (id)scopesForTask;
- (id)transportScope;
- (BOOL)isScopeValidInTransaction:;
@end
