@interface UIAssistantBarRoundedButtonViewButton : UIButton
@property (nonatomic) UIColor normalBackgroundColor;
@property (nonatomic) UIColor highlightedBackgroundColor;
@property (nonatomic) UIColor normalTitleColor;
@property (nonatomic) UIColor highlightedTitleColor;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)normalBackgroundColor;
- (id)_titleColorForState:;
- (id)highlightedBackgroundColor;
- (void)setHighlightedBackgroundColor:;
- (id)_currentTitleColor;
- (void)_updateBackgroundAndTitleColor;
- (void)setNormalBackgroundColor:;
- (void)setNormalTitleColor:;
- (void)setHighlightedTitleColor:;
- (id)normalTitleColor;
- (id)highlightedTitleColor;
@end
