@interface AWEPayNFCDispatcher : NSObject
@property (nonatomic) AWEPayNFCSession todoSession;
@property (nonatomic) BOOL inColdLaunchProgress;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) CJPayNFCConfig nfcSettings;
- (BOOL)isColdLaunch;
- (void)setIsColdLaunch:;
- (void)accountPrivacyPolicyAgreeNoti;
- (BOOL)inColdLaunchProgress;
- (void)setInColdLaunchProgress:;
- (void)transferToBusiness:;
- (void)setTodoSession:;
- (BOOL)bidIsForbid:;
- (void)cleanLastTransfer;
- (id)nfcSettings;
- (id)todoSession;
- (void)setNfcSettings:;
- (void).cxx_destruct;
+ (void)transferToBusiness:originDeeplinkURL:isColdLaunch:;
+ (void)goToDefaultPage:;
+ (BOOL)isInNFCColdLaunchProgress;
+ (id)sharedInstance;
@end
