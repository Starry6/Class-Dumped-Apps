@interface ELCoreOperatorResultUtil : NSObject
+ (id)aggregateWithNodes:;
+ (id)calculateWithLeft:operators:rightNode:;
+ (id)calculateWithNode:;
+ (id)handleTernaryOperationWithNodes:;
@end
