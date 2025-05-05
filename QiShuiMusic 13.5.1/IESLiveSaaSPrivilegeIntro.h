@interface IESLiveSaaSPrivilegeIntro : BDDynamicMTLModel
@property (nonatomic) NSString text;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
