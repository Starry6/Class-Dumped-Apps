@interface FPSetFlagsOperation : FPTransformOperation
- (id)fp_prettyDescription;
- (id)replicateForItems:;
- (unsigned long long)transformItem:atIndex:;
- (id)initWithItems:flags:;
@end
