@interface IESLiveCustomButton : IESLiveButton
@property (nonatomic) Q buttonSize;
@property (nonatomic) Q style;
@property (nonatomic) double minHeight;
@property (nonatomic) double spacing;
@property (nonatomic) BOOL disableAdjustSpacing;
@property (nonatomic) double cornerRadius;
- (void)applyCornerRadius:;
- (BOOL)disableAdjustSpacing;
- (void)renderButtonSize:;
- (void)setDisableAdjustSpacing:;
- (void)updateContentSpacingIfNeeded;
- (unsigned long long)buttonSize;
- (void)setButtonSize:;
- (double)spacing;
- (void)setSpacing:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setStyle:;
- (double)minHeight;
- (id)initWithFrame:;
- (void)setCornerRadius:;
- (void)setMinHeight:;
- (double)cornerRadius;
- (unsigned long long)style;
- (id)initWithStyle:;
- (void)renderStyle;
+ (id)buttonWithStyle:;
@end
