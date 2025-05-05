@interface IESLiveSaaSMSequenceDefaultCover : UIView
@property (nonatomic) IESLiveSaaSUserModel liveUser;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIView gradientView;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)addGradent;
- (id)coverImageView;
- (id)initWithLivingUser:;
- (id)liveUser;
- (void)setCoverImageView:;
- (void)setLiveUser:;
- (void)setTitleLabel:;
- (id)gradientLayer;
- (id)gradientView;
- (void).cxx_destruct;
- (void)setGradientView:;
- (id)titleLabel;
- (void)setGradientLayer:;
- (void)setupView;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
