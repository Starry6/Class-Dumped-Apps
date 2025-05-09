@interface AWEIMFansAndRecommendManager : NSObject
@property (nonatomic) NSArray userIDs;
@property (nonatomic) NSMutableDictionary operationDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishUnBlockUser:status:;
- (void)didFinishHideMyPostFromUser:status:;
- (void)didFinishApproveUserFollowRequest:error:;
- (void)didFinishRejectUserFollowRequestWithNoticeID:user:;
- (void)didFinishShowMyPostToUser:status:;
- (void)didFinishHidePostFromHer:status:;
- (void)didFinishUnHidePostFromHer:status:;
- (void)didFinishRemoveFansWithUser:;
- (void)setUserIDs:;
- (id)operationDic;
- (id)cacheModelForUID:;
- (void)updateFromUserIDs:;
- (id)getCacheModelOperationDic;
- (void)setOperationDic:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)userIDs;
+ (id)shareInstance;
@end
