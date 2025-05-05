@interface UIStatusBarDateTimeItemView : UIStatusBarItemView
@property (nonatomic) NSString dateTimeString;
@property (nonatomic) BOOL useCustomFadeAnimation;
- (id)accessibilityHUDRepresentation;
- (long long)textStyle;
- (void)setFrame:;
- (id)contentsImage;
- (void).cxx_destruct;
- (BOOL)updateForNewData:actions:;
- (void)setVisible:frame:duration:;
- (double)extraRightPadding;
- (BOOL)shouldTintContentImage;
- (BOOL)useCustomFadeAnimation;
- (void)setUseCustomFadeAnimation:;
- (id)dateTimeString;
- (void)setDateTimeString:;
+ (id)_cStringFromData:;
@end
