@interface AWEIMAlbumAssetProcessOperation : NSOperation
@property (nonatomic) <AWEIMAlbumAssetProcessOperationExecutor> executor;
@property (nonatomic) BOOL useOrigin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUseOrigin:;
- (BOOL)useOrigin;
- (id)initWithExecutor:useOrigin:;
- (void)markFinish;
- (void)onOperationExecutorFinish:;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (id)executor;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)start;
- (void)setExecutor:;
@end
