@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyWrapper
@property (nonatomic) double value;
@property (nonatomic) double presentationValue;
@property (nonatomic) double velocity;
- (double)velocity;
- (double)presentationValue;
- (void)setVelocity:;
- (void)setValue:;
- (id)_floatAnimatableProperty;
- (double)value;
@end
