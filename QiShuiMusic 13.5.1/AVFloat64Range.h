@interface AVFloat64Range : NSObject
@property (nonatomic) double minimum;
@property (nonatomic) double maximum;
- (double)minimum;
- (double)maximum;
- (unsigned long long)hash;
- (id)initWithMinimum:maximum:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAudioValueRange:;
+ (id)float64RangeWithMinimum:maximum:;
+ (id)float64RangeWithAudioValueRange:;
@end
