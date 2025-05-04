@interface AWEContactListHeaderFooterView : UITableViewHeaderFooterView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel topTitleLabel;
- (void)removeTopTitleLabelIfNeed;
- (void)configTopTitleLabelWithTitle:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (void)setTopTitleLabel:;
- (id)topTitleLabel;
+ (double)suggestHeight;
+ (id)identifier;
@end
