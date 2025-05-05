@interface IESLiveSaaSCommentBox : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage commentButtonIcon;
@property (nonatomic) NSString commentString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)commentButtonIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
