@interface IESLiveSaaSCommentMedal : BDDynamicMTLModel
@property (nonatomic) NSString name;
@property (nonatomic) IESLiveSaaSImage image;
@property (nonatomic) NSDictionary jumpSchema;
@property (nonatomic) IESLiveSaaSImage keyboardImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)imageJSONTransformer;
+ (id)keyboardImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
