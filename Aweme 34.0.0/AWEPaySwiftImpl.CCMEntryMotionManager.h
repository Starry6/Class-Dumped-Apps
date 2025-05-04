@interface AWEPaySwiftImpl.CCMEntryMotionManager : AWEBaseController
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:error:from:;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
