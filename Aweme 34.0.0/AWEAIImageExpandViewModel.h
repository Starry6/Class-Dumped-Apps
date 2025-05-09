@interface AWEAIImageExpandViewModel : ACCEditViewModel
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NPAIOutpaintingImpl_OC aiOutpaintingImpl;
@property (nonatomic) NLEInterface_OC captureFrameNLEInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isAIExpandLoading;
@property (nonatomic) BOOL aiExpandSignal;
- (id)editService;
- (void)setEditService:;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (void)sequenceEditService:changedWithAddedIndexSet:deletedIndexSet:;
- (BOOL)isAIExpandLoading;
- (void)setIsAIExpandLoading:;
- (BOOL)aiExpandSignal;
- (void)setAiExpandSignal:;
- (void)updateBackupProjectsOrigImageExpandState;
- (BOOL)checkAIExpandHashtagState;
- (void)updateImageInfoInstanceByLivephotoModeChange;
- (id)trackParamsWith:;
- (BOOL)backupToOriginImageWithError:;
- (id)errorMsgWithError:runtime:;
- (void)expandCurrentImageWithRuntime:progress:completion:;
- (id)currentNLE;
- (void)startAIImageExpandWithMaterialTransform:runtime:progress:completion:;
- (void)backupToOrigianlRepoImageInfoInstance;
- (void)addAIExpandHashtag;
- (void)removeAIExpandHashtag;
- (id)transformInfoFor:;
- (id)aiOutpaintingImpl;
- (id)outpaintingCachePath;
- (void)switchToAIExpandedRepoImageInfoInstance:;
- (void)getOrigFrameWithCurrentTransform:runtime:completion:;
- (double)calculateVideoSizeInCanvasSizeRatioWithMaterialTransform:;
- (id)updateMaterialTransformWithScale:origTransform:;
- (void)setCaptureFrameNLEInterface:;
- (id)captureFrameNLEInterface;
- (id)transformToPresetCoordinate:;
- (void)setAiOutpaintingImpl:;
- (id)serialQueue;
- (void)setSerialQueue:;
- (void).cxx_destruct;
- (id)initWithServiceProvider:;
+ (BOOL)aiExpandEnable:;
+ (BOOL)checkCancelStateWithRuntime:completion:;
@end
