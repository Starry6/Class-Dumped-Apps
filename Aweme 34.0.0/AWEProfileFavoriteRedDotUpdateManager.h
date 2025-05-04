@interface AWEProfileFavoriteRedDotUpdateManager : NSObject
@property (nonatomic) NSMutableArray storageCollectsIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)profileLC_didReceiveMessageObject:;
- (id)cachedCollectsIds;
- (void)setStorageCollectsIds:;
- (id)storageCollectsIds;
- (void)startLongConnection;
- (void)distributeBizMessageWithDataCell:;
- (id)transferStringToFavoriteRedDotModel:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstanceForBizId:;
+ (BOOL)followedFavoritesUseStaticRegister;
+ (id)sharedInstance;
@end
