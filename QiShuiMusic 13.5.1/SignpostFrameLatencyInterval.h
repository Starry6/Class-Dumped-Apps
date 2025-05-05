@interface SignpostFrameLatencyInterval : SignpostAnimationSubInterval
@property (nonatomic) NSSet contributingPids;
@property (nonatomic) I frameSeed;
@property (nonatomic) I swapId;
@property (nonatomic) Q totalFrameCount;
@property (nonatomic) Q lateFrameCount;
- (void).cxx_destruct;
- (unsigned int)frameSeed;
- (id)contributingPids;
- (void)setContributingPids:;
- (unsigned int)swapId;
- (id)initWithFrameLatencyInterval:isLong:;
- (id)initWithStartMCT:endMCT:timebaseRatio:swapID:frameSeed:totalFrameCount:lateFrameCount:;
- (unsigned long long)totalFrameCount;
- (unsigned long long)lateFrameCount;
@end
