@interface ASOPresentRemoteOverlayOperation : NSOperation
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) ASORemoteOverlay remoteOverlay;
- (void)cancel;
- (void)start;
- (BOOL)isExecuting;
- (void)setIsExecuting:;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setIsFinished:;
- (void)finishExecuting;
- (id)initWithRemoteOverlay:;
- (id)remoteOverlay;
- (void)setRemoteOverlay:;
@end
