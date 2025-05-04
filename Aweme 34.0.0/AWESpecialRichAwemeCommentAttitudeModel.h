@interface AWESpecialRichAwemeCommentAttitudeModel : AWEBaseApiModel
@property (nonatomic) NSString productInfo;
@property (nonatomic) AWEURLModel attitudeIcon;
- (id)attitudeIcon;
- (void)setAttitudeIcon:;
- (id)productInfo;
- (void).cxx_destruct;
- (void)setProductInfo:;
+ (id)attitudeIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
