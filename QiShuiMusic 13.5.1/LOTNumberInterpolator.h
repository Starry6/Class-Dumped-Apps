@interface LOTNumberInterpolator : LOTValueInterpolator
@property (nonatomic) <LOTNumberValueDelegate> delegate;
- (double)floatValueForFrame:;
- (BOOL)hasDelegateOverride;
- (void)setValueDelegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
