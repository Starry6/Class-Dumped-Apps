@interface AWEIMChatListPlaceHolderTableViewCell : UITableViewCell
@property (nonatomic) UIView baseView;
@property (nonatomic) UIImageView placeHolderImageView;
@property (nonatomic) UILabel descLabel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)__setupUI;
- (id)placeHolderImageView;
- (void)setPlaceHolderImageView:;
- (void)configWithImageName:desc:;
- (void)setBaseView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)baseView;
+ (id)identifier;
@end
