@interface AWECommentPartialScreenInteractiveLeaveTransition : CommentTransition
- (void)startCustomAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:;
- (unsigned long long)allowTriggerDirectionForContext:;
- (id)init;
- (unsigned long long)interactionType;
@end
