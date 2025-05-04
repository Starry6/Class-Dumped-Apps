@interface AWEPaySwiftImpl.CCMShakeHandler : NSObject
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:error:from:;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (id)init;
- (void).cxx_destruct;
@end
