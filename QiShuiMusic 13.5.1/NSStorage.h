@interface NSStorage : NSObject
- (unsigned long long)capacity;
- (void)addElement:;
- (id)init;
- (void)dealloc;
- (void)replaceElementAtIndex:withElement:;
- (id)elementAtIndex:;
- (void)removeElementsInRange:;
- (void)insertElements:count:atIndex:;
- (void)insertElement:atIndex:;
- (unsigned long long)hintCapacity;
- (id)initWithElementSize:capacity:;
- (id)pointerToElement:directlyAccessibleElements:;
- (unsigned long long)elementSize;
- (id)description;
- (void)enumerateElementsUsingBlock:;
- (void)removeElementAtIndex:;
- (unsigned long long)count;
- (void)setHintCapacity:;
@end
