@interface AWESearchBizMainCostRecorder : NSObject
@property (nonatomic) double autoCleanGap;
@property (nonatomic) double autoCleanThreshold;
@property (nonatomic) NSTimer autoCleanTimer;
- (void)p_clean:;
- (void)doClean;
- (void)startAutoClean;
- (id)autoCleanTimer;
- (void)setAutoCleanTimer:;
- (double)autoCleanGap;
- (double)autoCleanThreshold;
- (void)setAutoCleanGap:;
- (void)setAutoCleanThreshold:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)appendCostInfo:from:to:;
+ (void)appendCostInfo:from:to:extra:;
+ (void)setGlobalEnabled:;
+ (void)setEnableFixLeak:;
+ (id)fetchCostInfoFrom:to:;
+ (void)stopRecording;
+ (id)sharedInstance;
+ (void)startIfNeeded;
@end
