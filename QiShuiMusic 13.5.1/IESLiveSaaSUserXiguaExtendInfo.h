@interface IESLiveSaaSUserXiguaExtendInfo : MTLModel
@property (nonatomic) NSString shareUrl;
@property (nonatomic) NSString rSchemaUrl;
@property (nonatomic) IESLiveSaaSUserRocketSchema rocketSchemaInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rSchemaUrl;
- (id)rocketSchemaInfo;
- (id)shareUrl;
- (void).cxx_destruct;
+ (id)rocketSchemaInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
