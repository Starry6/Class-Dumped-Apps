@interface AWECommentTipsModel : AWEBaseApiModel
@property (nonatomic) Q commentTipsType;
@property (nonatomic) NSString commentTipsText;
- (unsigned long long)commentTipsType;
- (id)commentTipsText;
- (void)setCommentTipsType:;
- (void)setCommentTipsText:;
- (void).cxx_destruct;
+ (id)commentTipsTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
