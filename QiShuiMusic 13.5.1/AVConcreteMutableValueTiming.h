@interface AVConcreteMutableValueTiming : AVMutableValueTiming
- (void)setRate:;
- (double)rate;
- (id)_timing;
- (double)anchorTimeStamp;
- (id)initWithAnchorValue:anchorTimeStamp:rate:;
- (double)anchorValue;
- (void)setAnchorValue:;
- (void)setAnchorTimeStamp:;
@end
