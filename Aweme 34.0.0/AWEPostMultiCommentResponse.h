@interface AWEPostMultiCommentResponse : AWEBaseApiModel
@property (nonatomic) NSArray comments;
- (void).cxx_destruct;
- (id)comments;
- (void)setComments:;
+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
