@interface AWELeftSideBarFunctionHeaderView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWELeftSideBarFunctionMoreButton moreButton;
@property (nonatomic) <AWELeftSideBarFunctionHeaderViewDelegate> delegate;
- (void)initView;
- (void)updateTitleLabelText:;
- (void)updateSubTitleLabelText:;
- (void)initTitleLabel;
- (void)initMoreButton;
- (void)onClickMoreButton;
- (id)delegate;
- (void)setSubtitleHidden:;
- (id)initWithFrame:;
- (id)moreButton;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setMoreButton:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setBadgeHidden:;
+ (double)extraPaddingBottom;
+ (double)headerViewHeight;
@end
