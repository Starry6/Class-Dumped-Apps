@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOptions:error:;
- (id)getClustersWithOptions:error:;
- (long long)_cancellableUpdate:facesToMove:requestRevision:;
@end
