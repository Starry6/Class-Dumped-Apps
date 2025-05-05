@interface CSJLOTColorInterpolator : CSJLOTValueInterpolator
@property (nonatomic) <CSJLOTColorValueDelegate> delegate;
- (id)colorForFrame:;
- (BOOL)hasDelegateOverride;
- (void)setValueDelegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
