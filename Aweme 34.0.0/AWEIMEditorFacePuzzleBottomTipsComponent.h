@interface AWEIMEditorFacePuzzleBottomTipsComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) UIView wrapperView;
@property (nonatomic) UILabel errorTipsLabel;
@property (nonatomic) UILabel copyrightLabel;
- (id)errorTipsLabel;
- (void)setErrorTipsLabel:;
- (void)__setupUI;
- (void)componentDidMount;
- (void)loadComponentView;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (BOOL)__shouldMount;
- (void)__updateWrapperWithResult:;
- (void)__updateCopyrightWithResult:;
- (void)__addGradientBackgroundView;
- (id)__generateAttriButedString:;
- (id)__effectSettings;
- (id)__generateAttriButedString:fontSize:fontWeight:fontColor:;
- (id)copyrightLabel;
- (void)setCopyrightLabel:;
- (id)wrapperView;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
- (void)setWrapperView:;
@end
