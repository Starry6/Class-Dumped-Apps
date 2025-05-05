@interface IESLiveSaaSInAppMessageModel : BDDynamicMTLModel
@property (nonatomic) NSArray groups;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)groupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
