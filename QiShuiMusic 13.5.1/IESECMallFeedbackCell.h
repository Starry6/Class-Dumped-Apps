@interface IESECMallFeedbackCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView sepLine;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) IESECMallListKitBigFontConfig bigFontConfig;
- (id)sepLine;
- (id)bigFontConfig;
- (void)setBigFontConfig:;
- (void)setSepLine:;
- (void)updateCellData:title:isMore:tableViewWidth:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
