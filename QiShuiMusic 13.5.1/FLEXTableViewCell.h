@interface FLEXTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
- (id)initWithStyle:reuseIdentifier:;
- (void)postInit;
- (id)titleLabel;
- (id)subtitleLabel;
@end
