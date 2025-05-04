@interface AWECommentSendHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)sendCommentCompletionWithItemID:commentModel:error:sucessCompletion:retryBlock:;
+ (void)comment:publishParameterModel:content:context:interactionViewController:needToast:sendSuccessBlock:;
+ (void)sendCommentSucessWithItemID:commentModel:interactionViewController:completion:needToast:;
+ (void)sendCommentFailedWithError:retryBlock:needToast:;
+ (void)repost:inputView:context:;
@end
