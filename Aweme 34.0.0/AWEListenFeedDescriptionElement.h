@interface AWEListenFeedDescriptionElement : AWEListenFeedInteractionBaseElement
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIImage circleSeperatorImage;
@property (nonatomic) UIImage seperatorImage;
@property (nonatomic) UIImage mixImage;
- (void)handleConnectionChanged:;
- (void)updateWithModel:playModel:extendModelArray:mixVideoModel:currentModelIndex:context:;
- (void)updateWithModel:playModel:context:;
- (void)prepareForReuseVC;
- (void)updateAttributedDescriptionLabel;
- (id)circleSeperatorImage;
- (id)seperatorImage;
- (id)mixImage;
- (void)setCircleSeperatorImage:;
- (void)setSeperatorImage:;
- (void)setMixImage:;
- (void)setDescriptionLabel:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)descriptionLabel;
@end
