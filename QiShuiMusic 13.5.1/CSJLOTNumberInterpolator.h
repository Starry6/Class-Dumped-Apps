@interface CSJLOTNumberInterpolator : CSJLOTValueInterpolator
@property (nonatomic) <CSJLOTNumberValueDelegate> delegate;
- (double)floatValueForFrame:;
- (BOOL)hasDelegateOverride;
- (void)setValueDelegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
