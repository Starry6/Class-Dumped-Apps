@interface LOTPointInterpolator : LOTValueInterpolator
@property (nonatomic) <LOTPointValueDelegate> delegate;
- (BOOL)hasDelegateOverride;
- (id)pointValueForFrame:;
- (void)setValueDelegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
