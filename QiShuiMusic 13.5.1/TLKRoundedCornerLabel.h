@interface TLKRoundedCornerLabel : TLKView
@property (nonatomic) UIView borderView;
@property (nonatomic) TLKLabel label;
@property (nonatomic) Q sizeConfiguration;
- (BOOL)allowsVibrancy;
- (id)initWithProminence:;
- (void)tlk_updateForAppearance:;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setLabel:;
- (id)label;
- (id)effectiveLayoutSizeFittingSize:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)borderView;
- (void)setBorderView:;
- (void)updateFont;
- (void)setSizeConfiguration:;
- (unsigned long long)sizeConfiguration;
@end
