@interface AWENewCoverImageTemplateResourcesDataHelper : AWEImageTemplateResourcesDataHelper
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (nonatomic) BOOL disableAdjustPostion;
- (id)editService;
- (void)setEditService:;
- (id)videoCoverEditService;
- (void)setVideoCoverEditService:;
- (BOOL)enableFinetuningAdjustment;
- (id)getNeedDownloadedTemplateResources;
- (BOOL)ifNeedApplyNewTemplateResources;
- (BOOL)applyTemplateResourcesJsonToNLEImageWrapper;
- (void)setDisableAdjustPostion:;
- (BOOL)userVideoCoverRenderOptimize;
- (BOOL)disableAdjustPostion;
- (void).cxx_destruct;
+ (id)logSubTag;
@end
