@interface IESLiveIMMessageDecoder : IESLiveIMCustomMessageDecoder
@property (nonatomic) q errorMsgTraceMaxCount;
@property (nonatomic) q batchCount;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} firstBatchRWlock;
@property (nonatomic) q firstBatchCount;
- (long long)firstBatchCount;
- (void)decode:completion:;
- (long long)errorMsgTraceMaxCount;
- (id)firstBatchRWlock;
- (void)setErrorMsgTraceMaxCount:;
- (void)setFirstBatchCount:;
- (void)setFirstBatchRWlock:;
- (id)init;
- (void)dealloc;
- (long long)batchCount;
- (void)setBatchCount:;
+ (id)IESLiveMessageDecoderTypeStringValue:;
@end
