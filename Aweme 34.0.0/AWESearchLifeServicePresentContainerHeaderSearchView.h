@interface AWESearchLifeServicePresentContainerHeaderSearchView : AWESearchPresentContainerHeaderView
@property (nonatomic) UIView uiSearchBar;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIImageView magnifierImageView;
@property (nonatomic) UILabel keywordLabel;
@property (nonatomic) UIView lineView;
- (void)configureUIWithConfig:;
- (void)setupTheme:;
- (void)configureQueryText:;
- (void)setUiSearchBar:;
- (id)uiSearchBar;
- (void)setMagnifierImageView:;
- (id)magnifierImageView;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)keywordLabel;
- (void)setKeywordLabel:;
@end
