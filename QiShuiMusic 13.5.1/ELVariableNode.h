@interface ELVariableNode : ELBaseNode
- (id)calcuateWtihJSON:;
- (id)calculateWithEL:json:;
- (BOOL)isVariableNode;
- (id)objectForKey:source:;
@end
