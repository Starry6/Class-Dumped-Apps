@interface AWESimpleInfoView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) NSArray imageViewArray;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UILabel rankLabel;
@property (nonatomic) q type;
- (void)configWithModel:;
- (void)configUI;
- (id)imageViewArray;
- (void)setImageViewArray:;
- (void)configImages;
- (void)updateAvatarBorderColor:;
- (id)containerView;
- (long long)type;
- (void)setContainerView:;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)infoLabel;
- (void)setInfoLabel:;
- (id)rankLabel;
- (void)setRankLabel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
