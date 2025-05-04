@interface AWEDesktopGuideMinimizeAppMonitorUtil : NSObject
@property (nonatomic) BDUGFlowAuthToken token;
- (void)onAppDidBecomeActive;
- (void)performMinimizeAppWithInstallName:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
+ (id)sharedInstance;
@end
