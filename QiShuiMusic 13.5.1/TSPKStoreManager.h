@interface TSPKStoreManager : NSObject
@property (nonatomic) NSMutableDictionary stores;
- (void)storeEventData:;
- (void)broadcastSaveFailedEvent:;
- (void)broadcastSaveSuccessEvent:;
- (id)getStoreOfStoreId:;
- (void)initStoreOfStoreId:storeType:;
- (id)init;
- (void).cxx_destruct;
- (id)stores;
- (void)setStores:;
+ (id)sharedManager;
@end
