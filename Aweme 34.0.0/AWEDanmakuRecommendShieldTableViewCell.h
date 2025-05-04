@interface AWEDanmakuRecommendShieldTableViewCell : UITableViewCell
@property (nonatomic) AWEDanmakuRecommendShieldTableViewCellModel cellModel;
@property (nonatomic) double width;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIButton cancelButton;
- (void)setCellModel:;
- (id)danmakuContentAttributeString;
- (void)updateMyModel:;
- (void)setCancelButton:;
- (void)setWidth:;
- (double)width;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)cancelAction;
- (void)setupUI;
- (void)confirmAction;
- (id)confirmButton;
- (id)contentLabel;
- (void)setConfirmButton:;
- (void)setContentLabel:;
- (void)updateUI;
- (id)cellModel;
@end
