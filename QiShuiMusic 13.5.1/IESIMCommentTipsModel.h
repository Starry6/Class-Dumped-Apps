@interface IESIMCommentTipsModel : IESIMBaseApiModel
@property (nonatomic) Q commentTipsType;
@property (nonatomic) NSString commentTipsText;
- (unsigned long long)commentTipsType;
- (id)commentTipsText;
- (void)setCommentTipsText:;
- (void)setCommentTipsType:;
- (void).cxx_destruct;
+ (id)commentTipsTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
