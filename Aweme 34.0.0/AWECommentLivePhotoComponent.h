@interface AWECommentLivePhotoComponent : ACCFeatureComponent
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)editService;
- (void)setEditService:;
- (void)loadComponentView;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (void)bindServices:;
- (void)livePhotoClicked:;
- (void).cxx_destruct;
- (BOOL)isLivePhoto;
- (void)setImageView:;
- (id)imageView;
- (id)panGesture;
- (void)setPanGesture:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
