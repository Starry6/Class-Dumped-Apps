@interface AWEStickerApplyHandlerContainer : NSObject
@property (nonatomic) ACCCameraMeasureSubscription subscription;
@property (nonatomic) <ACCCameraService> cameraService;
@property (nonatomic) <ACCRecordPropService> propService;
@property (nonatomic) <ACCRecordFlowService> flowService;
@property (nonatomic) <ACCRecordConfigService> configService;
@property (nonatomic) <ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) <ACCRecordTrackService> trackService;
@property (nonatomic) <ACCFilterService> filterService;
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) <ACCRecordModeFactory> modeFactory;
@property (nonatomic) <ACCRecordUploadButtonService> uploadButtonService;
@property (nonatomic) AWEStudioRecorderFeaturePropConfig featureConfig;
@property (nonatomic) ACCPropViewModel propViewModel;
@property (nonatomic) UIViewController containerViewController;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) <AWEStickerViewLayoutManagerProtocol> layoutManager;
@property (nonatomic) BOOL isExposePanelEnabled;
@property (nonatomic) <ACCRecorderStickerServiceProtocol> stickerService;
@property (nonatomic) <ACCShootSourceService> shootSourceService;
@property (nonatomic) <ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (nonatomic) <AWERecordBeautyService> beautyService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackService;
- (id)cameraService;
- (void)setCameraService:;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)setTrackService:;
- (id)flowService;
- (void)setFlowService:;
- (id)modeFactory;
- (void)setModeFactory:;
- (id)configService;
- (void)setConfigService:;
- (id)stickerService;
- (id)switchModeService;
- (id)propService;
- (id)filterService;
- (id)beautyService;
- (void)setSwitchModeService:;
- (void)setFilterService:;
- (void)setPropService:;
- (id)featureConfig;
- (void)setFeatureConfig:;
- (id)duetSessionSwtichService;
- (id)shootSourceService;
- (void)camera:didApplySticker:success:;
- (void)camera:didRecvMessage:;
- (void)camera:willApplySticker:propSource:;
- (id)propViewModel;
- (id)uploadButtonService;
- (void)didSelectNewSticker:oldSticker:;
- (void)camera:didTakeAction:error:data:;
- (BOOL)isExposePanelEnabled;
- (id)initWithCameraService:propService:flowService:configService:switchModeService:trackService:filterService:serviceProvider:propViewModel:containerViewController:viewContainer:modeFactory:stickerService:shootSourceService:uploadButtonService:duetSessionSwtichService:beautyService:featureConfig:;
- (void)setUploadButtonService:;
- (id)costWithTopN:forSelector:;
- (void)setIsExposePanelEnabled:;
- (void)setPropViewModel:;
- (id)subscription;
- (id)layoutManager;
- (void)setSubscription:;
- (void)setContainerViewController:;
- (id)containerViewController;
- (void).cxx_destruct;
- (void)addHandler:;
- (void)setLayoutManager:;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
