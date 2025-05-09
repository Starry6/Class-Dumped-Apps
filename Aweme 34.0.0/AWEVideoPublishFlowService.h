@interface AWEVideoPublishFlowService : NSObject
@property (nonatomic) AWEStudioPromise promise;
@property (nonatomic) NSMutableDictionary context;
@property (nonatomic) AWEPublishModelFlowHandle modelHandle;
@property (nonatomic) AWEEditServiceFlowHandle editServiceHandle;
@property (nonatomic) AWEPublishTaskFlowHandle taskHandle;
@property (nonatomic) AWEPublishAlbumFlowHandle albumHandle;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) <AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (nonatomic) AWEPublishBaseTask task;
@property (nonatomic) AWEResourceUploadParametersResponseModel uploadParamsCache;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) BOOL isPostPage;
@property (nonatomic) NSNumber isPrepareForCanvasPublishAsImageAlbumFlag;
@property (nonatomic) Q taskFlowType;
@property (nonatomic) q triggerAdvanceSettingsClickSignal;
- (id)publishModel;
- (void)setPublishModel:;
- (id)editService;
- (void)setEditService:;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (id)uploadParamsCache;
- (void)setUploadParamsCache:;
- (id)editServiceManager;
- (void)setEditServiceManager:;
- (void)setIsPostPage:;
- (id)modelHandle;
- (id)editServiceHandle;
- (void)setIsPrepareForCanvasPublishAsImageAlbumFlag:;
- (id)buildTask;
- (id)taskHandle;
- (void)resetWithTask:;
- (unsigned long long)taskFlowType;
- (BOOL)isPostPage;
- (id)albumHandle;
- (void)configTask;
- (id)addFlowAction;
- (id)doFlow;
- (id)isPrepareForCanvasPublishAsImageAlbumFlag;
- (void)setUseSequeceEditServiceWhenMerge;
- (void)setModelHandle:;
- (void)setEditServiceHandle:;
- (void)setTaskHandle:;
- (void)setAlbumHandle:;
- (long long)triggerAdvanceSettingsClickSignal;
- (void)setTriggerAdvanceSettingsClickSignal:;
- (void)setTask:;
- (id)task;
- (void)setPromise:;
- (id)viewController;
- (void)setContext:;
- (void).cxx_destruct;
- (id)promise;
- (id)context;
- (void)setViewController:;
- (id)flow;
@end
