@interface VMUCallTreeLeafNode : VMUCallTreeNode
- (id)init;
- (void).cxx_destruct;
- (void)addAddress:;
- (id)initWithName:address:count:numBytes:;
- (void)getBrowserName:;
@end
