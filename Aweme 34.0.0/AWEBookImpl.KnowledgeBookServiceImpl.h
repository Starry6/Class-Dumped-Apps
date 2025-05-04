@interface AWEBookImpl.KnowledgeBookServiceImpl : HTSService
- (void)openBookDetailWithSchema:delegate:;
- (void)openShareAsBookStory:;
- (id)bookCommentController:;
- (void)jumpURLWithParams:user:;
- (void)jumpURLWithParamsForAuthor:;
- (id)init;
@end
