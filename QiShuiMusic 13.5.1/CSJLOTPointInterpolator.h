@interface CSJLOTPointInterpolator : CSJLOTValueInterpolator
@property (nonatomic) <CSJLOTPointValueDelegate> delegate;
- (BOOL)hasDelegateOverride;
- (id)pointValueForFrame:;
- (void)setValueDelegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
