@interface AWEEditPagePOIComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) AWEPOIUploadCreationInfoManager uploadCreationInfoManager;
@property (nonatomic) BOOL hasFirstRender;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)editService;
- (void)setEditService:;
- (void)bindServices:;
- (void)sensorialRenderWithEditService:;
- (void)setUploadCreationInfoManager:;
- (BOOL)hasFirstRender;
- (id)uploadCreationInfoManager;
- (void)setHasFirstRender:;
- (void).cxx_destruct;
@end
