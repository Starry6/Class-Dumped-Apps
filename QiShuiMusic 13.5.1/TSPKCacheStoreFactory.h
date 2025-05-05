@interface TSPKCacheStoreFactory : NSObject
@property (nonatomic) NSMutableDictionary globalStores;
- (id)getStore:;
- (id)globalStores;
- (void)setGlobalStores:;
- (id)init;
- (void).cxx_destruct;
+ (id)getStore:;
+ (id)sharedFactory;
@end
