@interface SiriAnalyticsClientMessageStream : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)resolvePartialMessage:timestamp:;
- (void)barrierWithCompletion:;
- (void)emitMessage:isolatedStreamUUID:;
- (void)emitMessage:timestamp:;
- (id)analyticsService;
- (void)setAnalyticsService:;
- (void)resolvePartialMessage:;
- (id)initWithQueue:analyticsService:delegate:;
- (void)emitMessage:;
- (void).cxx_destruct;
- (void)emitMessage:timestamp:isolatedStreamUUID:;
- (void)resolvePartialMessage:timestamp:isolatedStreamUUID:;
- (void)enqueueLargeMessageObjectFromPath:assetIdentifier:messageMetadata:completion:;
- (void)resolvePartialMessage:isolatedStreamUUID:;
@end
