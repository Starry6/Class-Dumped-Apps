@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval
@property (nonatomic) I swapId;
@property (nonatomic) I frameSeed;
- (unsigned int)frameSeed;
- (unsigned int)swapId;
- (id)initWithHIDLatencyInterval:;
- (id)initWithStartMCT:endMCT:timebaseRatio:swapID:frameSeed:;
@end
