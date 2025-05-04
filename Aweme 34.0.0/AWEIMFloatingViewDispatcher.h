@interface AWEIMFloatingViewDispatcher : AWEIMPriorityQueueSyncDispatcher
@property (nonatomic) NSMutableArray retryArr;
@property (nonatomic) <IESIMMessageContainerViewControllerProtocol> messageContainerViewController;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (void)setMessageContainerViewController:;
- (id)messageContainerViewController;
- (id)retryArr;
- (id)preRemoveEnable:;
- (id)preContinueEnable:;
- (void)setRetryArr:;
- (void).cxx_destruct;
- (void)retry;
@end
