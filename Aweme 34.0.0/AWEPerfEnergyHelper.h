@interface AWEPerfEnergyHelper : NSObject
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL stopRecordGPU;
- (double)gpuUsage;
- (BOOL)stopRecordGPU;
- (void)setStopRecordGPU:;
- (void)onAppDidActive;
- (void)onAppEnterBackground;
- (id)init;
- (BOOL)isBackground;
- (void)setIsBackground:;
+ (double)gpuUsage;
+ (id)sharedHelper;
@end
