@interface AWELeftSideBarFunctionModel : MTLModel
@property (nonatomic) BOOL componentDiff;
@property (nonatomic) AWEHPSideBarStencilViewDataModel uiConfig;
@property (nonatomic) AWELeftSideBarModuleModel firstPageModuleModel;
@property (nonatomic) AWELeftSideBarModel extraSideBarModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uiConfig;
- (void)setUiConfig:;
- (id)firstPageModuleModel;
- (id)extraSideBarModel;
- (BOOL)componentDiff;
- (void)setComponentDiff:;
- (void)setFirstPageModuleModel:;
- (void)setExtraSideBarModel:;
- (void).cxx_destruct;
- (id)abstract;
+ (id)uiConfigJSONTransformer;
+ (id)extraSideBarModelJSONTransformer;
+ (id)firstPageModuleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
