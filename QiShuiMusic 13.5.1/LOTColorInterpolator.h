@interface LOTColorInterpolator : LOTValueInterpolator
@property (nonatomic) <LOTColorValueDelegate> delegate;
- (id)colorForFrame:;
- (BOOL)hasDelegateOverride;
- (void)setValueDelegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
