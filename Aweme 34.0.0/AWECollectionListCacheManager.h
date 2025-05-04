@interface AWECollectionListCacheManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) AWEFavoriteFileDataController dataController;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)setDataController:;
- (void)p_ForceUpdateCache;
- (void)updateCollectionListWithCompletion:;
- (id)getCollectionListDataControllerWithUpdate:;
- (void)remakeCacheByList:hasMore:cursor:;
- (BOOL)isAvailable;
- (id)init;
- (void)dealloc;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (void)setIsAvailable:;
- (id)dataController;
- (void)updateCache:;
+ (id)sharedInstance;
@end
