@interface AWECampaignShortcutController : NSObject
@property (nonatomic) q reqInterval;
@property (nonatomic) NSString withdrawAmount;
@property (nonatomic) AWECampaignShortcutInfoModel model;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSDate lastFetchAmountTime;
@property (nonatomic) NSString willGetInfo;
@property (nonatomic) NSString withdrawInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (long long)reqInterval;
- (void)teenModeDidChange:isLogout:;
- (void)setupShortcutWithModel:;
- (id)willGetInfo;
- (void)setWillGetInfo:;
- (id)withdrawInfo;
- (void)setWithdrawInfo:;
- (void)setReqInterval:;
- (void)fetchCampaignWithdrawAmountWithCompletion:;
- (void)setWithdrawAmount:;
- (BOOL)enableFetchAmount;
- (void)setLastFetchAmountTime:;
- (void)updateAmountWithDouble:;
- (id)lastFetchAmountTime;
- (id)withdrawAmount;
- (void)openMainVenue;
- (void)setModel:;
- (void)setWebURL:;
- (id)model;
- (void).cxx_destruct;
- (id)webURL;
- (void)resetInfo;
+ (id)sharedInstance;
@end
