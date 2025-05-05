@interface AWEIMBaseListHeaderCell : UITableViewCell
@property (nonatomic) UILabel functionNameLabel;
@property (nonatomic) UIImageView functionImageView;
- (void)configWithName:;
- (id)functionImageView;
- (id)functionNameLabel;
- (void)setFunctionImageView:;
- (void)setFunctionNameLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setHighlighted:animated:;
- (void).cxx_destruct;
+ (id)identifier;
@end
