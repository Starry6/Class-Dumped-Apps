@interface AWESearchPresentContainerHeaderQueryView : AWESearchPresentContainerHeaderView
@property (nonatomic) UIImageView magnifierView;
@property (nonatomic) UILabel keywordLabel;
@property (nonatomic) UILabel keywordLabelPostfix;
@property (nonatomic) UIView closeButton;
@property (nonatomic) UIImageView closeButtonImage;
@property (nonatomic) UIView lineView;
- (id)closeButtonImage;
- (void)setCloseButtonImage:;
- (void)configureUIWithConfig:;
- (void)setupTheme:;
- (void)configureQueryText:;
- (void)setKeywordLabelPostfix:;
- (id)keywordLabelPostfix;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)keywordLabel;
- (void)setKeywordLabel:;
- (id)magnifierView;
- (void)setMagnifierView:;
@end
