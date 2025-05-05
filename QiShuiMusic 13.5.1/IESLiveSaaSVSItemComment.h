@interface IESLiveSaaSVSItemComment : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage itemCommentIconDark;
@property (nonatomic) IESLiveSaaSImage itemCommentIconLight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)itemCommentIconDarkJSONTransformer;
+ (id)itemCommentIconLightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
