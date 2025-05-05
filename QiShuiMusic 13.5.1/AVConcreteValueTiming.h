@interface AVConcreteValueTiming : AVValueTiming
- (double)rate;
- (id)_timing;
- (double)anchorTimeStamp;
- (id)initWithAnchorValue:anchorTimeStamp:rate:;
- (double)anchorValue;
- (id)copyWithZone:;
@end
