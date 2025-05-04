@interface AWETeenProtectionHomeTableHeaderView : UITableViewHeaderFooterView
@property (nonatomic) UILabel headerViewTitleLabel;
@property (nonatomic) UILabel headerViewSubtitleLabel;
@property (nonatomic) UIImageView headerViewImageView;
- (id)headerViewTitleLabel;
- (id)headerViewImageView;
- (id)headerViewSubtitleLabel;
- (void)setHeaderViewTitleLabel:;
- (void)setHeaderViewSubtitleLabel:;
- (void)setHeaderViewImageView:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (void)setupUI;
+ (id)identifier;
@end
