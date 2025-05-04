@interface AWEPadFeedAuthorRecommendCell : UIView
@property (nonatomic) UIImageView coverImgView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) NSString userId;
@property (nonatomic) NSNumber index;
- (void)setupSubViews;
- (id)tapGes;
- (void)setTapGes:;
- (void)jumpAction;
- (id)coverImgView;
- (void)setCoverImgView:;
- (void)setupAction;
- (void)configWithUserModel:index:;
- (void)setIndex:;
- (id)index;
- (id)userId;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setNameLabel:;
@end
