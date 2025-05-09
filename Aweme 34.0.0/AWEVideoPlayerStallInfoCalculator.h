@interface AWEVideoPlayerStallInfoCalculator : NSObject
@property (nonatomic) BOOL hasReport;
@property (nonatomic) q maxCount;
@property (nonatomic) double maxDuration;
@property (nonatomic) q currentCount;
@property (nonatomic) double currentDuration;
@property (nonatomic) NSDate stallStartTime;
@property (nonatomic) BOOL enableCalculator;
@property (nonatomic) NSTimer stallTimer;
@property (nonatomic) @? onReachMaxStallBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasReport:;
- (id)initWithMaxStallCount:andDuration:;
- (void)beginStall;
- (void)endStall;
- (void)startCalculator;
- (void)stopCalculator;
- (void)setOnReachMaxStallBlock:;
- (void)resetStallTimer;
- (void)setStallStartTime:;
- (BOOL)enableCalculator;
- (id)onReachMaxStallBlock;
- (void)setStallTimer:;
- (id)stallStartTime;
- (id)stallTimer;
- (void)setEnableCalculator:;
- (void)setMaxCount:;
- (long long)currentCount;
- (long long)maxCount;
- (void).cxx_destruct;
- (void)reset;
- (double)maxDuration;
- (BOOL)hasReport;
- (void)setMaxDuration:;
- (void)setCurrentCount:;
- (double)currentDuration;
- (void)setCurrentDuration:;
@end
