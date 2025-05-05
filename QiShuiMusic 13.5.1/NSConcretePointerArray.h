@interface NSConcretePointerArray : NSPointerArray
- (void)setCount:;
- (void)compact;
- (void)addPointer:;
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (void)arrayGrow:;
- (void)removePointerAtIndex:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)pointerAtIndex:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)removePointer:;
- (void)insertPointer:atIndex:;
- (id)initWithPointerFunctions:;
- (void)encodeWithCoder:;
- (void)replacePointerAtIndex:withPointer:;
- (void)_markNeedsCompaction;
- (unsigned long long)indexOfPointer:;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)pointerFunctions;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
