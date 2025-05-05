@interface IESLiveSaaSBattleUserInfo : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSBaseUserInfo baseUserInfo;
@property (nonatomic) NSArray userTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)baseUserInfoJSONTransformer;
+ (id)userTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
