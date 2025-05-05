@interface MPAsyncBlockOperation : MPAsyncOperation
@property (nonatomic) @? startHandler;
- (void)execute;
- (id)initWithStartHandler:;
- (id)startHandler;
- (void).cxx_destruct;
@end
