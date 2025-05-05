@interface UIRoundedRectButton : UIButton
- (void)drawRect:;
- (void)setFrame:;
- (BOOL)_canDrawContent;
- (void)_updateState;
- (id)initWithFrame:;
- (void)setBounds:;
- (void).cxx_destruct;
- (void)setTintColor:;
- (void)setHighlighted:;
- (long long)buttonType;
- (id)initWithFrame:fillColor:;
- (id)_contentBackgroundColor;
- (void)_invalidatePaths;
+ (Class)_visualProviderClass;
@end
