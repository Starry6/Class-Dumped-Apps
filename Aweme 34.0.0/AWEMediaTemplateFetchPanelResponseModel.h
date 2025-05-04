@interface AWEMediaTemplateFetchPanelResponseModel : AWEBaseApiModel
@property (nonatomic) AWEMediaTemplateListPanelDataResponseModel panelData;
- (id)panelData;
- (void)setPanelData:;
- (void).cxx_destruct;
+ (id)panelDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
