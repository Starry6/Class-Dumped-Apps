@interface CKModifyBadgeOperation : CKOperation
@property (nonatomic) CKModifyBadgeOperationInfo operationInfo;
@property (nonatomic) Q badgeValue;
@property (nonatomic) @? modifyBadgeCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (unsigned long long)badgeValue;
- (id)activityCreate;
- (id)init;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)setBadgeValue:;
- (void)fillOutOperationInfo:;
- (id)initWithBadgeValue:;
- (void)setModifyBadgeCompletionBlock:;
- (id)modifyBadgeCompletionBlock;
@end
