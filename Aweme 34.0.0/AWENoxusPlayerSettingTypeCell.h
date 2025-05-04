@interface AWENoxusPlayerSettingTypeCell : UITableViewCell
@property (nonatomic) UIButton cellBtn;
@property (nonatomic) AWENoxusPlayerSettingTypeModel selectModel;
@property (nonatomic) DUXTextTag videoTag;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) BOOL isCurrentGuide;
- (id)videoTag;
- (void)setVideoTag:;
- (void)setIsCurrentGuide:;
- (void)setCellBtn:;
- (void)setupCellBtn;
- (BOOL)isCurrentGuide;
- (id)cellBtn;
- (unsigned long long)matchPixel:;
- (id)selectModel;
- (void)setSelectModel:;
- (void)prepareForReuse;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateModel:;
@end
