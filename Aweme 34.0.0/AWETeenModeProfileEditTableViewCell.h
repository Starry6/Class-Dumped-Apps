@interface AWETeenModeProfileEditTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) AWETeenModeProfileEditModel model;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)detailLabel;
- (void)updateSubviews;
- (void)setDetailLabel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (double)titleLineSpacing;
+ (id)identifier;
@end
