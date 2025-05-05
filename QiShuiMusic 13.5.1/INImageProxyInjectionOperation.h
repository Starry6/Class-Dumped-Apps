@interface INImageProxyInjectionOperation : NSOperation
@property (nonatomic) <INImageProxyInjecting> injector;
@property (nonatomic) @? imageProxyRequestBlock;
@property (nonatomic) @? copyReturnBlock;
- (id)imageProxyRequestBlock;
- (void)start;
- (BOOL)isExecuting;
- (void)setImageProxyRequestBlock:;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (id)injector;
- (void).cxx_destruct;
- (void)setCopyReturnBlock:;
- (id)copyReturnBlock;
- (void)setInjector:;
@end
