@interface UIPopoverButton : UIButton
- (id)_intrinsicSizeWithinSize:;
- (void)setEnabled:;
- (id)initWithFrame:buttonType:;
+ (Class)_visualProviderClass;
@end
