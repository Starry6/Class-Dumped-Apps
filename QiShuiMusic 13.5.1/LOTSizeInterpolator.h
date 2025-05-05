@interface LOTSizeInterpolator : LOTValueInterpolator
@property (nonatomic) <LOTSizeValueDelegate> delegate;
- (BOOL)hasDelegateOverride;
- (void)setValueDelegate:;
- (id)sizeValueForFrame:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
