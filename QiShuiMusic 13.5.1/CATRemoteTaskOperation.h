@interface CATRemoteTaskOperation : CATTaskOperation
@property (nonatomic) NSNumber remotePhase;
@property (nonatomic) CATTaskClient client;
- (void)processNotificationWithName:userInfo:;
- (void)operationWillFinish;
- (void)processMessage:;
- (void)updateProgressWithRemoteProgress:;
- (void)cancel;
- (void)postNotificationWithName:userInfo:;
- (void)setRemotePhase:;
- (id)initWithRequest:clientError:;
- (id)initWithRequest:client:;
- (id)remotePhase;
- (void)cancelOperationIfNeeded;
- (void)fetchProgress;
- (BOOL)isAsynchronous;
- (void)main;
- (id)client;
- (void).cxx_destruct;
- (void)updateCompletedUnitCount:andTotalUnitCount:;
- (void)clientFailedWithError:;
+ (id)invalidRemoteTaskWithRequest:error:;
+ (BOOL)isCancelable;
@end
