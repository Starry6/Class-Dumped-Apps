@interface BDMannorStyleTemplateModel : MTLModel
@property (nonatomic) NSNumber templateID;
@property (nonatomic) NSDictionary componentData;
@property (nonatomic) NSDictionary componentRelation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentData;
- (id)componentRelation;
- (void)setComponentData:;
- (void)setComponentRelation:;
- (id)templateID;
- (void)setTemplateID:;
- (void).cxx_destruct;
+ (id)componentDataJSONTransformer;
+ (id)componentRelationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
