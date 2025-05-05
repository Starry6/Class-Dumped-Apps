@interface IESLiveSaaSRichTextModel : BDDynamicMTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString text;
@property (nonatomic) IESLiveSaaSImage img;
@property (nonatomic) NSNumber fontSize;
@property (nonatomic) NSString fontColor;
@property (nonatomic) NSNumber weight;
@property (nonatomic) q modelType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithComplexContent:;
- (long long)modelType;
- (id)attributes;
+ (id)imgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
