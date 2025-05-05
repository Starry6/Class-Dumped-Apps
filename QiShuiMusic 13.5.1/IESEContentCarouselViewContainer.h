@interface IESEContentCarouselViewContainer : UICollectionViewCell
@property (nonatomic) NSString bizTag;
@property (nonatomic) NSString sceneTag;
@property (nonatomic) UIImageView promotionImageView;
@property (nonatomic) IESECURLModel promotionImageModel;
@property (nonatomic) UIImageView imageView;
- (void)bindActivityURLModel:;
- (void)bindURLModel:;
- (id)bizTag;
- (id)promotionImageModel;
- (id)promotionImageView;
- (id)sceneTag;
- (void)setBizTag:;
- (void)setPromotionImageModel:;
- (void)setPromotionImageView:;
- (void)setSceneTag:;
- (void)unbindActivityURLModel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
@end
