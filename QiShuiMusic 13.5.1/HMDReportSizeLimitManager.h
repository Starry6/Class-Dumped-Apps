@interface HMDReportSizeLimitManager : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) Q thresholdSize;
@property (nonatomic) NSMutableSet tools;
@property (nonatomic) q currentDataSize;
@property (nonatomic) Q uploadIntervalSec;
- (void)addSizeLimitTool:;
- (void)dataSizeThreshold:;
- (BOOL)increaseDataLength:;
- (void)removeSizeLimitTool:;
- (void)setDataSizeThreshold:;
- (void)setThresholdSize:;
- (void)setUploadIntervalSec:;
- (void)startSizeLimit;
- (void)stopSizeLimit;
- (unsigned long long)thresholdSize;
- (unsigned long long)uploadIntervalSec;
- (id)init;
- (void)start;
- (void)stop;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)setTools:;
- (id)tools;
- (long long)currentDataSize;
- (void)setCurrentDataSize:;
+ (id)defaultControlManager;
@end
