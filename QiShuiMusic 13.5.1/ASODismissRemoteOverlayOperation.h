@interface ASODismissRemoteOverlayOperation : NSOperation
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) <ASORemoteContextProvider> contextProvider;
- (void)cancel;
- (void)start;
- (BOOL)isExecuting;
- (void)setIsExecuting:;
- (BOOL)isFinished;
- (id)initWithContextProvider:;
- (void).cxx_destruct;
- (void)setIsFinished:;
- (id)contextProvider;
- (void)finishExecuting;
- (void)setContextProvider:;
@end
