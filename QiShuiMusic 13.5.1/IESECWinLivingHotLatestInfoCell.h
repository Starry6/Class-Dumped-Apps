@interface IESECWinLivingHotLatestInfoCell : UICollectionViewCell
@property (nonatomic) UIImageView bgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel webcastInfoLabel;
@property (nonatomic) UIView splitLineView;
@property (nonatomic) UILabel audienceInfoLabel;
- (id)audienceInfoLabel;
- (void)bindObject:;
- (void)setAudienceInfoLabel:;
- (void)setSplitLineView:;
- (void)setWebcastInfoLabel:;
- (id)splitLineView;
- (id)webcastInfoLabel;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)bgView;
- (void)setBgView:;
- (void)setupViews;
- (void)updateUI;
@end
