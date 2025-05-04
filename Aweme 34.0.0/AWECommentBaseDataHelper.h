@interface AWECommentBaseDataHelper : NSObject
- (id)init;
+ (void)publishCommentWithModel:completion:;
+ (void)changeCommentAICloneStateWithModel:completion:;
+ (void)deleteCommentWithModel:completion:;
+ (void)requestCommentReplyListWithModel:completion:;
+ (void)requestCommentListWithModel:completion:;
+ (void)actionCommentWithModel:completion:;
@end
