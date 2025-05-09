@interface AWENewCoverEditImageTemplateRenderServiceHelper : NSObject
@property (nonatomic) AWENewCoverImageTemplateResourcesDataHelper resourceDataHelper;
@property (nonatomic) BOOL isRenderTemplateLocked;
@property (nonatomic) AWENewCoverEditImageTemplateViewModel viewModel;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (nonatomic) <ACCStickerServiceProtocol> stickerService;
@property (nonatomic) <AWENewCoverEditImageTemplateRenderServiceHelperDelegate> delegate;
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) BOOL disableAdjustPostion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishViewModel;
- (void)bindViewModel;
- (void)setPublishViewModel:;
- (id)editService;
- (void)setEditService:;
- (id)stickerService;
- (void)setStickerService:;
- (id)videoCoverEditService;
- (id)currentImageItemModel;
- (void)setVideoCoverEditService:;
- (void)setIsRenderTemplateLocked:;
- (void)setShouldLockTemplateApply:;
- (void)prepareImageTemplateResourcesIfSuccess:cachedResources:;
- (BOOL)isRenderTemplateLocked;
- (void)prepareImageTemplateResourcesIsCancel;
- (void)clearTemplate;
- (void)renderImageTemplateWithTemplateMediaID:isInitializeScene:currentTemplateInfoModel:;
- (void)setDisableAdjustPostion:;
- (id)resourceDataHelper;
- (void)removeTemplate;
- (void)removeStickers;
- (void)removeFilter;
- (BOOL)userVideoCoverRenderOptimize;
- (id)transferCacheDicToTemplateInfo:;
- (id)getCurrentTemplateMediaID;
- (id)currentImageTemplateLayerTrackInfoWithNLEImageWrapper:;
- (void)updateStickerLimitViewWithSize:;
- (void)updateCoverSafeAreaMaskVIewWithSize:;
- (BOOL)disableAdjustPostion;
- (void)renderImageTemplateWithTemplateMediaID:isInitializeScene:;
- (void)setResourceDataHelper:;
- (id)delegate;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)getTemplateCropInfoWith:;
@end
