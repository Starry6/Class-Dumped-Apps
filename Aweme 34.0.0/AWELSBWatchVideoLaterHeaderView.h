@interface AWELSBWatchVideoLaterHeaderView : UIView
@property (nonatomic) UIView showAllButton;
@property (nonatomic) DUXBaseImageView arrowImageView;
@property (nonatomic) UILabel showAllLabel;
@property (nonatomic) UIView divideLine;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWELeftSideBarWatchVideoLaterHeaderUIConfig uiConfig;
- (id)uiConfig;
- (id)initWithUIConfig:;
- (void)setUiConfig:;
- (void)showAllTip:;
- (void)updateShowAllTextWithUnreadCount:;
- (id)showAllLabel;
- (id)divideLine;
- (void)setShowAllLabel:;
- (void)setDivideLine:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setShowAllButton:;
- (id)showAllButton;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
