@interface AWETemplateFetchPanelResponseModel : MTLModel
@property (nonatomic) NSString message;
@property (nonatomic) q statusCode;
@property (nonatomic) AWETemplateListPanelDataResponseModel panelData;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)panelData;
- (void)setPanelData:;
- (long long)statusCode;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setStatusCode:;
+ (id)panelDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
