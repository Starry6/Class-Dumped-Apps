@interface AWEHotVideoVenationFooterView : UITableViewHeaderFooterView
@property (nonatomic) UIImageView timelineImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowImageView;
- (id)timelineImageView;
- (void)configFooterStyle:;
- (void)setTimelineImageView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)reuseIdentifier;
+ (double)footerHeight;
@end
