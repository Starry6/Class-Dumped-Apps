@interface SiriAnalyticsRemoteService : NSObject
- (id)_packageMessageForXPC:timestamp:isolatedStreamUUID:;
- (void)enqueueLargeMessageObjectFromPath:dataUploadEvent:completion:;
- (void)barrierWithCompletion:;
- (void)sensitiveCondition:endedAt:completion:;
- (void).cxx_destruct;
- (void)sensitiveCondition:startedAt:completion:;
- (void)resolvePartialMessage:timestamp:isolatedStreamUUID:completion:;
- (id)initWithMachServiceName:;
- (void)emitMessage:timestamp:isolatedStreamUUID:completion:;
@end
