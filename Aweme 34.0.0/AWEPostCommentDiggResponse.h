@interface AWEPostCommentDiggResponse : AWEBaseApiModel
@property (nonatomic) AWECommentIntentionComponentModel commentIntentionComponent;
@property (nonatomic) BOOL canShowCommentCapsule;
- (BOOL)canShowCommentCapsule;
- (id)commentIntentionComponent;
- (void)setCommentIntentionComponent:;
- (void)setCanShowCommentCapsule:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
