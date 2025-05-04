@interface AWESpecialRichAwemeProductLabelModel : AWEBaseApiModel
@property (nonatomic) NSString commentPrefix;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString productAttitude;
@property (nonatomic) AWEURLModel attitudeIcon;
@property (nonatomic) NSString anchorSchema;
- (id)attitudeIcon;
- (void)setAttitudeIcon:;
- (id)commentPrefix;
- (void)setCommentPrefix:;
- (id)productAttitude;
- (void)setProductAttitude:;
- (id)anchorSchema;
- (void)setAnchorSchema:;
- (void)setProductName:;
- (id)productName;
- (void).cxx_destruct;
+ (id)attitudeIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
