@interface IESLiveSaaSBaseUserInfo : BDDynamicMTLModel
@property (nonatomic) NSNumber userId;
@property (nonatomic) NSString nickname;
@property (nonatomic) IESLiveSaaSImage avatarImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)avatarImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
