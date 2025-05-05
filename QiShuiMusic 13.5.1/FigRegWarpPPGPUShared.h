@interface FigRegWarpPPGPUShared : NSObject
- (void).cxx_destruct;
- (id)getShaders:;
+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:;
@end
