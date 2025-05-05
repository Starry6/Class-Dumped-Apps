@interface IESLiveSaaSToolBarComponentData : BDDynamicMTLModel
@property (nonatomic) q groupId;
@property (nonatomic) q componentType;
@property (nonatomic) q opType;
@property (nonatomic) NSString text;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) q showType;
@property (nonatomic) q dataStatus;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
