@interface AWEIMPlatformGroupFeatureConfig : MTLModel
@property (nonatomic) q conversationFeatureConfigType;
@property (nonatomic) NSDictionary featureType_featureItem_dict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)modelCustomTransformFromDictionary:;
- (id)featureType_featureItem_dict;
- (long long)conversationFeatureConfigType;
- (void)setConversationFeatureConfigType:;
- (void)setFeatureType_featureItem_dict:;
- (id)initWithRawDictionary:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)featureType_featureItem_dictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
