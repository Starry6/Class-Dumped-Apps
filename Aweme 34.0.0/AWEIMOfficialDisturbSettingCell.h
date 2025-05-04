@interface AWEIMOfficialDisturbSettingCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView<IESIMSettingSwitchProtocol> aSwitch;
@property (nonatomic) @? switchBlock;
@property (nonatomic) AWEIMBaseNoticeDisturbModelNew noticeDisturbModel;
- (void)setSwitchBlock:;
- (id)switchBlock;
- (void)switchControlDidChanged:;
- (id)noticeDisturbModel;
- (void)setNoticeDisturbModel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)aSwitch;
- (void)setASwitch:;
+ (id)identifier;
@end
