@interface AWERecordIMFacePuzzleFrameTipComponent : ACCFeatureComponent
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) <ACCCameraService> cameraService;
@property (nonatomic) UILabel topTipsLabel;
@property (nonatomic) UILabel brightnessTipsLabel;
@property (nonatomic) UIImageView faceFrameView;
- (void)__setupUI;
- (id)cameraService;
- (void)setCameraService:;
- (void)componentDidMount;
- (id)topTipsLabel;
- (void)setTopTipsLabel:;
- (void)brightnessChanged:;
- (void)loadComponentView;
- (void)bindServices:;
- (BOOL)__shouldMount;
- (id)__generateAttriButedString:;
- (id)__effectSettings;
- (id)__generateAttriButedString:fontSize:fontWeight:fontColor:;
- (id)brightnessTipsLabel;
- (void)setBrightnessTipsLabel:;
- (id)faceFrameView;
- (void)setFaceFrameView:;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
