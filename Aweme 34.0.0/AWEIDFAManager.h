@interface AWEIDFAManager : NSObject
@property (nonatomic) BOOL needGuide;
@property (nonatomic) @? showAlertBlock;
- (void)showIDFAIfNeededWithCompletion:;
- (BOOL)needGuide;
- (void)setNeedGuide:;
- (void)registerSpalshDisappearNotification;
- (void)didReceiveSplashDisappearNotification;
- (int)shouldShowIDFA;
- (void)showIDFAAlertWithType:andCompletion:;
- (void)setShowAlertBlock:;
- (id)showAlertBlock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
