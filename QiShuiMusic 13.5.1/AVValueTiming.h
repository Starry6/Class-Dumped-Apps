@interface AVValueTiming : NSObject
@property (nonatomic) double currentValue;
@property (nonatomic) double anchorValue;
@property (nonatomic) double anchorTimeStamp;
@property (nonatomic) double rate;
- (double)currentValue;
- (double)rate;
- (id)_timing;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)anchorTimeStamp;
- (void)encodeWithCoder:;
- (id)initWithAnchorValue:anchorTimeStamp:rate:;
- (Class)classForCoder;
- (id)mutableCopyWithZone:;
- (double)anchorValue;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)valueForTimeStamp:;
- (id)initWithValueTiming:;
- (double)timeStampForValue:;
- (BOOL)isEqualToValueTiming:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)valueTimingWithAnchorValue:anchorTimeStamp:rate:;
+ (double)currentTimeStamp;
@end
