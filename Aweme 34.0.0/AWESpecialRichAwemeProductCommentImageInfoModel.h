@interface AWESpecialRichAwemeProductCommentImageInfoModel : AWEBaseApiModel
@property (nonatomic) AWESpecialRichAwemeCommentAttitudeModel commentAttitudeModel;
@property (nonatomic) AWESpecialRichAwemeProductLabelModel productLabelModel;
- (id)commentAttitudeModel;
- (void)setCommentAttitudeModel:;
- (id)productLabelModel;
- (void)setProductLabelModel:;
- (void).cxx_destruct;
+ (id)commentAttitudeModelJSONTransformer;
+ (id)productLabelModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
