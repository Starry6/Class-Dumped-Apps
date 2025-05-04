@interface AWELivePreStreamLiveDistributeBigCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel heatCountLabel;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) IESLiveImageView iconImageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_initUI;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)bindViewModel:;
- (id)heatCountLabel;
- (void)setHeatCountLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setNameLabel:;
@end
