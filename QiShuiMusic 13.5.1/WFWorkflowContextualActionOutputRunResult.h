@interface WFWorkflowContextualActionOutputRunResult : WFWorkflowRunResult
@property (nonatomic) NSArray files;
@property (nonatomic) NSData reversalState;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)files;
- (id)initWithFiles:runError:reversalState:;
- (id)reversalState;
+ (BOOL)supportsSecureCoding;
@end
