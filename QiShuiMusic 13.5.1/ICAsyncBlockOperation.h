@interface ICAsyncBlockOperation : ICAsyncOperation
@property (nonatomic) @? startHandler;
@property (nonatomic) @? cancellationHandler;
- (void)execute;
- (void)cancel;
- (void)setCancellationHandler:;
- (id)cancellationHandler;
- (id)initWithStartHandler:;
- (id)startHandler;
- (void).cxx_destruct;
- (void)finishWithError:;
@end
