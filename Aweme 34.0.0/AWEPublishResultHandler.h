@interface AWEPublishResultHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didBeginWithInfo:;
- (void)task:didEndWithResult:error:;
- (void)replaceMusicPublishProgressWithTask:taskStatus:;
- (void)task:cancelWithResult:;
- (void)onTaskCancel:;
- (void)cancelProductDetectPostWithTask:;
- (void)lynxBridgeSendEventWithTask:status:;
- (void)sendEventWithTask:status:;
- (void)saveUseMusicWhenBeginPublishIfNeededWithTask:;
- (void)showToastWithResultV2:error:;
- (void)recordDraftInvisibleWithTask:;
- (void)recordPublishSourcePathIfNeed:;
- (id)init;
- (void)dealloc;
- (void)startListen;
+ (id)defaultHandler;
@end
