@interface PHAdjustmentDataRequest : PHMediaRequest
@property (nonatomic) <PHAdjustmentDataRequestDelegate> delegate;
@property (nonatomic) PHAdjustmentDataRequestBehaviorSpec behaviorSpec;
- (id)behaviorSpec;
- (void)cancel;
- (void)startRequest;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isSynchronous;
- (void)_cplDownloadStatusNotification:;
- (id)initWithRequestID:requestIndex:contextType:managerID:asset:behaviorSpec:delegate:;
- (void)_finishFromAsynchronousCallback;
@end
