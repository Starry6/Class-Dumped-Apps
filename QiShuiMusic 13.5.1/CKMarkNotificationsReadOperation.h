@interface CKMarkNotificationsReadOperation : CKOperation
@property (nonatomic) NSMutableArray notificationIDsMarkedRead;
@property (nonatomic) NSMutableDictionary errorsByNotificationID;
@property (nonatomic) <CKMarkNotificationsReadOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKMarkNotificationsReadOperationInfo operationInfo;
@property (nonatomic) NSArray notificationIDs;
@property (nonatomic) @? markNotificationsReadCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (id)init;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (void)handleMarkNotificationReadCompletionForNotificationID:error:;
- (id)initWithNotificationIDsToMarkRead:;
- (void)setMarkNotificationsReadCompletionBlock:;
- (id)markNotificationsReadCompletionBlock;
- (id)notificationIDs;
- (void)setNotificationIDs:;
- (id)notificationIDsMarkedRead;
- (void)setNotificationIDsMarkedRead:;
- (id)errorsByNotificationID;
- (void)setErrorsByNotificationID:;
+ (void)applyDaemonCallbackInterfaceTweaks:;
@end
