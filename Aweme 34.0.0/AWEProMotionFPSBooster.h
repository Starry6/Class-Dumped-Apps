@interface AWEProMotionFPSBooster : NSObject
- (void).cxx_destruct;
+ (void)boostFPSForScrolling;
+ (void)boostFPSForAppearance;
+ (id)setPreferredFPS:hint:;
+ (void)unsetPreferredFPS:;
+ (void)setupBooster;
+ (BOOL)isEnabled;
+ (void)tick:;
@end
