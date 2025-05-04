@interface AWECreateAwemeCommentInfoModel : ACCBaseApiModel
@property (nonatomic) AWECommentModel comment;
- (id)comment;
- (void).cxx_destruct;
- (void)setComment:;
+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
