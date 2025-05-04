@interface AWESearchImmersiveMediaVideoTimeModel : AWEBaseApiModel
@property (nonatomic) double start;
@property (nonatomic) double step;
- (void)setStart:;
- (double)step;
- (void)setStep:;
- (double)start;
+ (id)JSONKeyPathsByPropertyKey;
@end
