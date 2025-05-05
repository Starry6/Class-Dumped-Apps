@interface IESLiveSaaSVSBar : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSVSItemBar itemComment;
@property (nonatomic) IESLiveSaaSVSItemBar itemBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)itemBarJSONTransformer;
+ (id)itemCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
