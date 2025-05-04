@interface AWELiteCommonModuleService : HTSService
@property (nonatomic) BOOL coldLaunchRequestFinished;
@property (nonatomic) BOOL coldLaunchRequesting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)fetchColdLaunchDataIfNeededWithEnterType:;
- (BOOL)coldLaunchRequestFinished;
- (BOOL)coldLaunchRequesting;
- (void)setColdLaunchRequesting:;
- (void)setColdLaunchRequestFinished:;
- (void)dealloc;
+ (void)onLiteBusinessInit;
+ (double)incentiveChatTokenShareViewHeightWithShareType:;
+ (id)createIncentiveChatTokenShareViewControllerWithShareType:paramDict:;
@end
