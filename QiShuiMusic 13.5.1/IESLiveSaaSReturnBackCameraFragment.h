@interface IESLiveSaaSReturnBackCameraFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) NSInteger returnBackStyle;
@property (nonatomic) <IESLiveSaaSReturnBackCameraRouter> returnCameraRouter;
@property (nonatomic) UIView indicatorView;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)returnBackStyle;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentMount;
- (void)componentOrientationChanged:;
- (void)hideComponent;
- (void)layoutIndicatorView:;
- (void)onCameraDidChangeTo:source:;
- (void)onCameraWillChangeTo:source:;
- (void)renderIndicatorView;
- (id)returnCameraRouter;
- (void)setReturnBackStyle:;
- (void)setReturnCameraRouter:;
- (void)showComponent;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)indicatorView;
- (void)setIndicatorView:;
- (void)setIsFinished:;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
