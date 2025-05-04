@interface AWEProfileAwemeUnreadCacheManager : NSObject
@property (nonatomic) NSMutableDictionary memoryCacheMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)setMemoryCacheMap:;
- (id)memoryCacheMap;
- (void)p_clearCache;
- (BOOL)isItemUnreadWithUserID:item:;
- (void)p_videoStartPlaySucceed:;
- (id)getItemIDsWithUserID:;
- (void)p_markReadStatusWithUser:itemIdList:completion:;
- (void)storeItemIDsWithUserID:items:;
- (void)p_uploadUserVideosReadStatusWithType:itemIdList:completion:;
- (id)diffCacheItemsNotExistStatusWithUser:diffTargetItems:responseItems:;
- (void)updateCacheItemsNotExistStatusWithUser:itemIdList:completion:;
- (void)diffAndUpdateCacheItemsNotExistStatusWithUser:diffTargetItems:responseItems:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
