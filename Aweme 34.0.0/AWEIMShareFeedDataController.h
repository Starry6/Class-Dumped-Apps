@interface AWEIMShareFeedDataController : NSObject
@property (nonatomic) YYMemoryCache feedStatusCache;
- (void)didFinishLogoutWithUid:;
- (id)feedStatusCache;
- (void)setFeedStatusCache:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)p_isShareFeedMessage:;
+ (id)itemIDForShareFeedMessage:;
+ (id)makeKeyForItemID:fromUserId:conversationID:;
+ (void)requestShareFeedInfoFromMessages:completion:;
+ (void)reportFeedStatus:withAwemeModel:completion:;
+ (id)getItemIdDKeyWithAweme:;
+ (id)sharedInstance;
@end
