@interface VMUCallTreeRootWithBacktrace : VMUCallTreeRoot
@property (nonatomic) NSString backtraceString;
- (void).cxx_destruct;
- (id)backtraceString;
- (void)setBacktraceString:;
@end
