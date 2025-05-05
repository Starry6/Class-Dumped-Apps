@interface CSJLOTSizeInterpolator : CSJLOTValueInterpolator
@property (nonatomic) <CSJLOTSizeValueDelegate> delegate;
- (BOOL)hasDelegateOverride;
- (void)setValueDelegate:;
- (id)sizeValueForFrame:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
