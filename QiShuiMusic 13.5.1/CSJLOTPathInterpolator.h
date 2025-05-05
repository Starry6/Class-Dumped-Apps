@interface CSJLOTPathInterpolator : CSJLOTValueInterpolator
@property (nonatomic) <CSJLOTPathValueDelegate> delegate;
- (BOOL)hasDelegateOverride;
- (id)pathForFrame:cacheLengths:;
- (void)setValueDelegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
