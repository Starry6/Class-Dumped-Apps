@interface AWEContentPreferenceManager : NSObject
@property (nonatomic) NSString caller;
@property (nonatomic) NSString refreshToastMsg;
@property (nonatomic) BOOL shouldRrefreshFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)teenModeDidChange:isLogout:;
- (void)addNotifications;
- (void)basicModeDidChange:;
- (void)setRefreshToastMsg:;
- (void)setShouldRrefreshFlag:;
- (BOOL)shouldRrefreshFlag;
- (id)refreshToastMsg;
- (void)setFeedNeedsRefreshWithCaller:needsRefresh:refreshToastMsg:;
- (void)feedRecommendChannelViewDidAppear;
- (void)resetStatus;
- (id)init;
- (void)dealloc;
- (id)caller;
- (void)setCaller:;
- (void).cxx_destruct;
- (void)refreshIfNeeded;
+ (id)sharedInstance;
@end
