@interface AWEFeedSyncMultiDeviceHelpCell : UITableViewCell
@property (nonatomic) UIImageView arrow;
@property (nonatomic) Q theme;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView pcHelpContainerView;
@property (nonatomic) UIView padHelpContainerView;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) UIImageView pcHelpImageView;
@property (nonatomic) UIImageView padHelpImageView;
@property (nonatomic) UILabel pcTitle;
@property (nonatomic) UILabel padTitle;
@property (nonatomic) UITextView padDetailTextView;
@property (nonatomic) UITextView pcDetailTextView;
@property (nonatomic) UIButton expandBtn;
@property (nonatomic) UIImageView padImageView;
@property (nonatomic) UIImageView pcImageView;
@property (nonatomic) UITableView tableView;
- (void)clickAction;
- (id)detailTextView;
- (id)pcHelpContainerView;
- (id)padHelpContainerView;
- (id)pcTitle;
- (id)padTitle;
- (void)setTextViewText:;
- (id)expandBtn;
- (id)pcDetailTextView;
- (id)padDetailTextView;
- (void)animated:unfold:;
- (id)pcHelpImageView;
- (id)padHelpImageView;
- (void)setupViewsWith:;
- (void)toggleHelp:;
- (void)setPcHelpContainerView:;
- (void)setPadHelpContainerView:;
- (void)setPcHelpImageView:;
- (void)setPadHelpImageView:;
- (void)setPcTitle:;
- (void)setPadTitle:;
- (void)setPadDetailTextView:;
- (void)setPcDetailTextView:;
- (void)setExpandBtn:;
- (id)padImageView;
- (void)setPadImageView:;
- (id)pcImageView;
- (void)setPcImageView:;
- (BOOL)isDark;
- (void)setIsExpanded:;
- (unsigned long long)theme;
- (void)setTheme:;
- (BOOL)isExpanded;
- (void)setTableView:;
- (id)containerView;
- (id)tableView;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupViews;
- (id)arrow;
- (void)setArrow:;
- (id)bgColor;
@end
