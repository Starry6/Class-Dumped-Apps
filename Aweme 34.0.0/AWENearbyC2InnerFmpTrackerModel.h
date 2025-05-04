@interface AWENearbyC2InnerFmpTrackerModel : AWENearbyC2TrackerModel
@property (nonatomic) double totalTime;
@property (nonatomic) double visibleTime;
@property (nonatomic) double jumpPageTime;
@property (nonatomic) q awemeType;
@property (nonatomic) BOOL interrupted;
@property (nonatomic) Q interruptedReason;
@property (nonatomic) q pageType;
- (long long)awemeType;
- (void)setAwemeType:;
- (void)setJumpPageTime:;
- (void)setVisibleTime:;
- (void)setInterruptedReason:;
- (double)jumpPageTime;
- (unsigned long long)interruptedReason;
- (double)totalTime;
- (void)setInterrupted:;
- (void)setPageType:;
- (BOOL)interrupted;
- (void)setTotalTime:;
- (long long)pageType;
- (double)visibleTime;
@end
