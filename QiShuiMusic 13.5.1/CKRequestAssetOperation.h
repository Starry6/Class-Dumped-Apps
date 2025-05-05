@interface CKRequestAssetOperation : NSOperation
@property (nonatomic) CKUploadRequestMetadata metadata;
@property (nonatomic) @? requestCallback;
@property (nonatomic) q state;
@property (nonatomic) @? assetRequestCompletionBlock;
- (void)setState:;
- (void)start;
- (id)metadata;
- (BOOL)isExecuting;
- (void)setMetadata:;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (long long)state;
- (void).cxx_destruct;
- (id)requestCallback;
- (void)setRequestCallback:;
- (id)initWithAssetMetadata:requestCallback:;
- (id)assetRequestCompletionBlock;
- (void)setAssetRequestCompletionBlock:;
@end
