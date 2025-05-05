@interface AKCoordinatedDataBlock : NSObject
- (void)setCompletion:;
- (void)start;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)_start;
- (void)_callCompletionWithData:error:;
+ (id)startCoordinatingBlock:;
@end
