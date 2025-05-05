@interface VEMetalGPUInfoTracker : NSObject
- (id)getInfoDict;
- (id)init;
- (void).cxx_destruct;
+ (void)uploadMetalGPUInfo;
+ (void)uploadMetalGPUInfoOnce;
@end
