@interface WCTChainCall : WCTCore
- (BOOL)bindProperty:ofObject:toStatementHandle:atIndex:withError:;
- (BOOL)bindWithValue:toStatementHandle:atIndex:withError:;
- (void)setStatisticsEnabled:;
- (double)cost;
- (id)error;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
