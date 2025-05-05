@interface BDARDislikeCellBase : UITableViewCell
@property (nonatomic) BDARDislikeItem item;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView line;
@property (nonatomic) BOOL hiddeLine;
@property (nonatomic) NSIndexPath indexPath;
- (BOOL)hiddeLine;
- (void)setHiddeLine:;
- (id)initWithStyle:reuseIdentifier:;
- (id)item;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void)setIndexPath:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)colorWithAlpha:;
- (id)indexPath;
- (id)line;
- (id)titleLabel;
- (void)setLine:;
+ (double)singeLineHeight;
+ (long long)space;
@end
