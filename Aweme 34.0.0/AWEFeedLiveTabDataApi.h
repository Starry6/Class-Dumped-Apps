@interface AWEFeedLiveTabDataApi : NSObject
@property (nonatomic) HTSLiveFeedDataApi feedApi;
- (void)setFeedApi:;
- (id)feedApi;
- (void)requestLiveTabInfoWithType:enterFrom:enterMethod:params:tabItem:completion:;
- (void)requestLiveTabFollowUpVisitWithCompletion:;
- (id)init;
- (void).cxx_destruct;
+ (id)obtainRequestMetaInfoWith:tabItem:enterFrom:enterMethod:;
+ (id)feedAPIURLWithPullType:tabItem:enterFrom:enterMethod:actionType:;
@end
