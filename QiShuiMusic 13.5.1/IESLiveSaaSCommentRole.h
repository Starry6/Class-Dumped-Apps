@interface IESLiveSaaSCommentRole : BDDynamicMTLModel
@property (nonatomic) q roleId;
@property (nonatomic) NSString name;
@property (nonatomic) IESLiveSaaSImage avatar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
