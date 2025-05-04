@interface AWEVCDAuthorizeShowAlertManager : NSObject
@property (nonatomic) AWEVCDV2AlertModel vcdV2Model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)hasAuthorizeRelation;
- (id)aAWEMainModuleServiceDOUYINHTSAdaper;
- (void)showAuthorizeAlertOnFeedIfNeeded;
- (BOOL)shouldWaitOtherNotification;
- (id)vcdV2Model;
- (void)setVcdV2Model:;
- (BOOL)shouldShowAccountAlertOnFeed;
- (void)showAccountAlertOnFeed;
- (BOOL)shouldShowRelaionAlertOnFeed;
- (void)showRelationAlertOnFeed;
- (id)aAWEVCDAuthorizeCommonAdapter;
- (BOOL)isShowing;
- (void).cxx_destruct;
+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEVCDAuthorizeCommonAdapterClass;
+ (id)sharedInstance;
@end
