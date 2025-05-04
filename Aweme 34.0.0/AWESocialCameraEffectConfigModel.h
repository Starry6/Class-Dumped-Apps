@interface AWESocialCameraEffectConfigModel : MTLModel
@property (nonatomic) NSArray categoryArray;
@property (nonatomic) AWESocialCameraEffectConfigPanelCategoryParamsModel panelCategoryParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)categoryArray;
- (void)setCategoryArray:;
- (id)panelCategoryParams;
- (void)setPanelCategoryParams:;
- (void).cxx_destruct;
+ (id)categoryArrayJSONTransformer;
+ (id)panelCategoryParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
