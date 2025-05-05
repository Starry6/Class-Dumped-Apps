@interface IESLiveSaaSUserBrotherGroupModel : BDDynamicMTLModel
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString fontColor;
@property (nonatomic) NSNumber level;
@property (nonatomic) IESLiveSaaSImage liveIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)liveIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
