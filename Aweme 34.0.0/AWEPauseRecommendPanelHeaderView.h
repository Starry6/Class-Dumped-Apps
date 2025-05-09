@interface AWEPauseRecommendPanelHeaderView : UIView
@property (nonatomic) UILabel foldTitleLabel;
@property (nonatomic) UILabel expandedTitleLabel;
@property (nonatomic) UIImageView arrowIcon;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) double panelHeaderHeight;
@property (nonatomic) @? didTapCloseButton;
@property (nonatomic) @? themeColorDidChange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)arrowIcon;
- (void)setArrowIcon:;
- (void)didTapClose;
- (void)setDidTapCloseButton:;
- (void)setThemeColorDidChange:;
- (void)updateCloseButtonConstraintsWithTopPadding:;
- (void)updateFoldedTitleConstraintsWithTopPadding:;
- (void)updatePanelState:;
- (double)panelHeaderHeight;
- (void)setPanelHeaderHeight:;
- (id)foldTitleLabel;
- (id)themeColorDidChange;
- (void)setFoldTitleLabel:;
- (void)setExpandedTitleLabel:;
- (double)headerHeight;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (id)didTapCloseButton;
- (id)expandedTitleLabel;
+ (id)pauseShowRelateConfigDict;
@end
