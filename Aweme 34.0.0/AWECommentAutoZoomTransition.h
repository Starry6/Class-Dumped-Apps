@interface AWECommentAutoZoomTransition : CommentTransition
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (id)init;
- (unsigned long long)interactionType;
@end
