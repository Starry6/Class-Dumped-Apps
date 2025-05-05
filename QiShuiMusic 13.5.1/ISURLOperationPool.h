@interface ISURLOperationPool : NSObject
@property (nonatomic) ISOperationQueue operationQueue;
- (id)init;
- (void)dealloc;
- (id)operationQueue;
- (void)setOperationQueue:;
- (void)cancelOperation:;
- (void)addOperation:withFlags:;
- (id)_poolOperationForOperation:flags:;
@end
