@interface AWEIMOfficialDisturbSettingSelectCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIButton btn;
@property (nonatomic) @? selectBlock;
@property (nonatomic) AWEIMNoticeConfigModel noticeConfigModel;
- (void)setSelectBlock:;
- (id)btn;
- (void)setBtn:;
- (void)onTapSelection;
- (id)noticeConfigModel;
- (void)setNoticeConfigModel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)selectBlock;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)identifier;
@end
