@interface AWEPostPageContext : ACCRepositoryWrapper
@property (nonatomic) AWEVideoPublishViewModel originalModel;
@property (nonatomic) AWEResourceUploadParametersResponseModel uploadParamsCache;
@property (nonatomic) ACCPublishViewControllerInputData inputData;
@property (nonatomic) <AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (nonatomic) NSNumber dynamicyPrepareCanvasPublishAsImageFlagValue;
@property (nonatomic) AWEVideoPublishViewModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awesst_enterFrom;
- (id)commonTrackParams;
- (id)initWithInputData:;
- (void)setOriginalModel:;
- (id)originalModel;
- (id)uploadParamsCache;
- (void)setUploadParamsCache:;
- (id)editServiceManager;
- (void)setEditServiceManager:;
- (id)dynamicyPrepareCanvasPublishAsImageFlagValue;
- (BOOL)isShowingLivePlaybackStyle;
- (void)updateUploadParamsCache:;
- (void)setDynamicyPrepareCanvasPublishAsImageFlagValue:;
- (id)model;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:;
@end
