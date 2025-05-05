@interface IESECWindowFeedVideoComponent : UIView
@property (nonatomic) UIView playerContainer;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView playIcon;
@property (nonatomic) UIView linearGradient;
@property (nonatomic) <IESECWindowFeedVideoComponentModel> dataSource;
- (id)playerContainer;
- (void)clickAction;
- (id)coverImageView;
- (id)linearGradient;
- (id)playIcon;
- (void)setCoverImageView:;
- (void)setLinearGradient:;
- (void)setPlayIcon:;
- (void)setPlayerContainer:;
- (void)updateUIWithModel:;
- (void)setDataSource:;
- (id)initWithFrame:;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)video:;
@end
