@interface AWEIMSpringFaceToFaceActivityModel : MTLModel
@property (nonatomic) AWEIMSpringFaceToFaceInputPandelModel panel;
@property (nonatomic) NSArray keyboard;
@property (nonatomic) NSArray pushInfo;
@property (nonatomic) AWEIMSpringFaceToFaceSchemaModel schemaModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schemaModel;
- (id)pushInfo;
- (void)setSchemaModel:;
- (void)setPushInfo:;
- (id)keyboard;
- (void).cxx_destruct;
- (void)setKeyboard:;
- (id)panel;
- (void)setPanel:;
+ (id)pushInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)panelJSONTransformer;
+ (id)schemaModelJSONTransformer;
@end
