@interface GEOMapRequest : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) @? cancellationHandler;
@property (nonatomic) BOOL isFinished;
- (void)complete;
- (void)cancel;
- (void)dealloc;
- (void)setCancellationHandler:;
- (id)cancellationHandler;
- (id)initWithManager:;
- (void)setCompletionHandler:;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)_finishAndCallHandler:;
@end
