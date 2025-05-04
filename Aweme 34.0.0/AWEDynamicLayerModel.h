@interface AWEDynamicLayerModel : MTLModel
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString uri;
@property (nonatomic) NSDictionary templateData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)templateData;
- (void)setTemplateData:;
- (void)mergeDataIntoTemplate:forKey:;
- (id)uri;
- (int)type;
- (void)setUri:;
- (void)setType:;
- (void).cxx_destruct;
+ (id)templateDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
