@interface BMStoreSource : BMSource
@property (nonatomic) BOOL isPublicStream;
@property (nonatomic) BMComputeSourceClient computeSource;
- (void)sendEvent:timestamp:;
- (void)sendEvent:timestampNumber:notifyCompute:;
- (void)sendEvent:;
- (id)initWithIdentifier:storeConfig:;
- (id)initWithIdentifier:storeConfig:accessClient:;
- (id)computeSource;
- (void).cxx_destruct;
- (BOOL)isPublicStream;
@end
