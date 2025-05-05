@interface FINodeIterator : NSObject
@property (nonatomic) BOOL fullyPopulated;
@property (nonatomic) Q estimatedSize;
- (id)next;
- (void)dealloc;
- (id)first;
- (id)initWithIterator:;
- (unsigned long long)estimatedSize;
- (BOOL)fullyPopulated;
+ (id)iteratorForFINode:includingInvisibleItems:;
@end
