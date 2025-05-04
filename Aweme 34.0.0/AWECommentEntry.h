@interface AWECommentEntry : AWEBaseApiModel
@property (nonatomic) NSString replyToCommentId;
@property (nonatomic) AWECommentModel comment;
@property (nonatomic) q code;
- (id)replyToCommentId;
- (void)setReplyToCommentId:;
- (long long)code;
- (id)comment;
- (void)setCode:;
- (void).cxx_destruct;
- (void)setComment:;
+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
