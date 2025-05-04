@interface AWEIMEditorFaceDetectInfoBarComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) ACCTextStickerHandler textStickerHandler;
@property (nonatomic) AWEIMRecorderImageRecognizeIndicatorView indicatorView;
- (void)componentDidMount;
- (void)componentDidAppear;
- (id)editService;
- (void)setEditService:;
- (void)loadComponentView;
- (id)textStickerHandler;
- (void)setTextStickerHandler:;
- (BOOL)p_componentIsEnable;
- (void).cxx_destruct;
- (id)indicatorView;
- (void)setIndicatorView:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
