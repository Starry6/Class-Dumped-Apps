@interface IESLiveSaaSUserFansBadgeIconModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) IESLiveSaaSImage smallIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)smallIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
