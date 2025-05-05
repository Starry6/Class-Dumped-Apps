@interface AKAuthorizationLoginChoiceCell : UITableViewCell
@property (nonatomic) AKAuthorizationLoginChoice loginChoice;
@property (nonatomic) UIImage iconImage;
- (void)layoutSubviews;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)iconImage;
- (id)loginChoice;
- (void)setLoginChoice:;
- (id)initWithLoginChoice:reuseIdentifier:;
- (void)_setupFormat;
- (void)_setupContent;
@end
