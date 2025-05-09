@interface BDHMXAppSettingHelper : NSObject
@property (nonatomic) BOOL blankDetectionNewAlgorithmEnabled;
@property (nonatomic) q colorDiff;
@property (nonatomic) NSArray blankScreenNewAlgorithmUrlAllowList;
@property (nonatomic) NSArray blankScreenNewAlgorithmUrlBlockList;
@property (nonatomic) q blankLoadingDuration;
@property (nonatomic) q blankDetectionTiming;
@property (nonatomic) q blankFixedDurationLoadingDuration;
@property (nonatomic) BOOL useImageContextCaptureScreenshot;
@property (nonatomic) NSArray lynxBlankScreenNewAlgorithmUrlBlockList;
@property (nonatomic) q lynxBlankLoadingDuration;
@property (nonatomic) BOOL blankDetectCheckMemoryUsage;
@property (nonatomic) BOOL blankDetectCheckVirtualMemoryUsage;
@property (nonatomic) double blankDetectMemoryCriticalRates;
@property (nonatomic) double blankDetectVirtualMemoryCriticalRates;
@property (nonatomic) BOOL useAlog;
@property (nonatomic) BOOL enableVirtualAid;
- (BOOL)blankDetectCheckMemoryUsage;
- (BOOL)blankDetectCheckVirtualMemoryUsage;
- (double)blankDetectMemoryCriticalRates;
- (double)blankDetectVirtualMemoryCriticalRates;
- (long long)blankDetectionTiming;
- (long long)blankFixedDurationLoadingDuration;
- (long long)blankLoadingDuration;
- (id)blankScreenNewAlgorithmUrlAllowList;
- (id)blankScreenNewAlgorithmUrlBlockList;
- (long long)colorDiff;
- (BOOL)isBlankDetectionNewAlgorithmEnabled;
- (BOOL)isEnableVirtualAid;
- (BOOL)isUseAlog;
- (BOOL)isUseImageContextCaptureScreenshot;
- (long long)lynxBlankLoadingDuration;
- (id)lynxBlankScreenNewAlgorithmUrlBlockList;
+ (id)shareInstance;
@end
