@interface AWEFastReplyModel : AWEBaseApiModel
@property (nonatomic) Q scene;
@property (nonatomic) AWERelativeUserModel user;
@property (nonatomic) AWECommentModel comment;
- (id)user;
- (void)setUser:;
- (void)setScene:;
- (id)comment;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (void)setComment:;
+ (id)userJSONTransformer;
+ (id)sceneJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
