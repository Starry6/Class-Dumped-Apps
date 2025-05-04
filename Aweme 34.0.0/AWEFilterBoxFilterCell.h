@interface AWEFilterBoxFilterCell : UITableViewCell
@property (nonatomic) UIImageView filterImageView;
@property (nonatomic) UILabel filterNameLabel;
@property (nonatomic) UIImageView checkImageView;
@property (nonatomic) IESEffectModel filterModel;
@property (nonatomic) Q iconStyle;
- (void)setFilterModel:;
- (id)filterModel;
- (id)filterImageView;
- (void)configWithIconStyle:;
- (void)configWithRoundStyle;
- (void)configWithSquareStyle;
- (void)setCheckImageViewChecked:;
- (void)setFilterImageView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)checkImageView;
- (void)setCheckImageView:;
- (unsigned long long)iconStyle;
- (void)setIconStyle:;
- (id)filterNameLabel;
- (void)setFilterNameLabel:;
@end
