@interface AVMutableValueTiming : AVValueTiming
@property (nonatomic) double anchorValue;
@property (nonatomic) double anchorTimeStamp;
@property (nonatomic) double rate;
- (void)setRate:;
- (Class)classForCoder;
- (void)setAnchorValue:;
- (void)setAnchorTimeStamp:;
- (void)setValueTiming:;
+ (id)allocWithZone:;
@end
