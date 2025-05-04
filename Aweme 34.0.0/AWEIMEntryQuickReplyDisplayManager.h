@interface AWEIMEntryQuickReplyDisplayManager : NSObject
@property (nonatomic) q dismissCount;
@property (nonatomic) NSMutableDictionary hotFeedCountInfos;
@property (nonatomic) NSMutableDictionary familiarCountInfos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)markQuickReplyShowWithAweme:containerType:;
- (void)markAwemeModelWillShow:containerType:;
- (void)markFeedWillRefreshWithContainerType:;
- (BOOL)needImmediatelyShowQuickReplyWithAweme:inContainer:;
- (BOOL)checkMainThread;
- (id)countInfosWithContainerType:;
- (void)setFamiliarCountInfos:;
- (void)setHotFeedCountInfos:;
- (long long)dismissCount;
- (void)setDismissCount:;
- (id)hotFeedCountInfos;
- (id)familiarCountInfos;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)hasRepliedWithAwemeModel:;
+ (void)markRepliedWithAwemeModel:;
+ (id)sharedInstance;
@end
