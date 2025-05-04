@interface AWESearchPreNetworkRequestParamsObject : NSObject
@property (nonatomic) BOOL isPredictFetch;
@property (nonatomic) BOOL isPassivePredictFetch;
@property (nonatomic) NSDictionary initialProperties;
@property (nonatomic) Q ackCountdownTime;
@property (nonatomic) AWESearchPreNetworkContext preNetworkContext;
@property (nonatomic) BOOL removeChunkStateMachineAfterPreRequest;
- (unsigned long long)ackCountdownTime;
- (void)setAckCountdownTime:;
- (BOOL)removeChunkStateMachineAfterPreRequest;
- (void)setPreNetworkContext:;
- (void)setRemoveChunkStateMachineAfterPreRequest:;
- (BOOL)isPredictFetch;
- (id)preNetworkContext;
- (BOOL)isPassivePredictFetch;
- (void)setIsPredictFetch:;
- (void)setIsPassivePredictFetch:;
- (void).cxx_destruct;
- (id)initialProperties;
- (void)setInitialProperties:;
@end
