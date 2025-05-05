@interface ISURLOperationPoolOperation : ISOperation
@property (nonatomic) ISURLOperation mainOperation;
- (BOOL)containsOperation:;
- (void)dealloc;
- (void)addOperation:;
- (void)run;
- (void)cancelOperation:;
- (id)mainOperation;
- (void)_forwardResponseFromOperation:toOperation:;
@end
