@interface IESLiveRichTextModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString text;
@property (nonatomic) IESLiveImage img;
@property (nonatomic) NSNumber fontSize;
@property (nonatomic) NSString fontColor;
@property (nonatomic) NSNumber weight;
@property (nonatomic) q modelType;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPBModel:;
- (id)initWithType:text:image:fontSize:fontColor:weight:;
- (long long)modelType;
- (id)attributes;
+ (id)imgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
