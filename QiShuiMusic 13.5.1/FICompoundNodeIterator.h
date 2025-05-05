@interface FICompoundNodeIterator : FINodeIterator
- (id)next;
- (id)first;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)estimatedSize;
- (BOOL)fullyPopulated;
- (id)initWithFINodes:iteratorIncludingInvisibleItems:;
@end
