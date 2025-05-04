@interface AWELiveStickerCardCell : UITableViewCell
@property (nonatomic) UILabel leftTitleLabel;
@property (nonatomic) UILabel rightTitleLabel;
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) AWELiveLocalLifeBizAttributeModel bizModel;
- (id)bizModel;
- (void)setBizModel:;
- (id)leftTitleLabel;
- (void)setLeftTitleLabel:;
- (void)configIconUrl:;
- (id)iconImage;
- (void)setIconImage:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)rightTitleLabel;
- (void)setRightTitleLabel:;
@end
