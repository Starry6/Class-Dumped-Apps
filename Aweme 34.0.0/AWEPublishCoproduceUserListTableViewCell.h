@interface AWEPublishCoproduceUserListTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) UILabel coProduceDescLabel;
@property (nonatomic) UIButton changeButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) AWECoProduceUserModel coProduceUserModel;
@property (nonatomic) @? closeButtonClickBlock;
@property (nonatomic) @? changeIdentifyButtonClickBlock;
- (id)nickNameLabel;
- (void)setNickNameLabel:;
- (void)setCloseButtonClickBlock:;
- (id)closeButtonClickBlock;
- (void)closeButtonTap;
- (void)configCellWithUser:;
- (id)coProduceDescLabel;
- (void)configCellWithUser:canEdit:;
- (void)setCoProduceUserModel:;
- (id)coProduceUserModel;
- (void)disableAndGrey:;
- (void)disableAndHide:;
- (id)changeIdentifyButtonClickBlock;
- (void)changeButtonTap;
- (void)updateCoProduceRole:;
- (id)getCoProduceIdentify;
- (void)setChangeIdentifyButtonClickBlock:;
- (void)setCoProduceDescLabel:;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (id)changeButton;
- (void)setChangeButton:;
+ (id)identifier;
+ (double)cellHeight;
@end
