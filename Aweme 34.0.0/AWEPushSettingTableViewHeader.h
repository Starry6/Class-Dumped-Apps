@interface AWEPushSettingTableViewHeader : UIView
@property (nonatomic) NSURL imageUrl;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) NSString subTitle;
@property (nonatomic) UIImageView titleImageView;
@property (nonatomic) UILabel subTitleLabel;
- (double)subTitleHeight;
- (id)initWithImageUrl:subTitle:;
- (id)titleImageView;
- (double)headerViewHeight;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)imageSize;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setTitleImageView:;
@end
