@interface IESECSKUBaseTask : NSObject
@property (nonatomic) IESECSKUTaskContext context;
@property (nonatomic) @? completion;
- (id)completion;
- (void)setCompletion:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)runTask;
@end
