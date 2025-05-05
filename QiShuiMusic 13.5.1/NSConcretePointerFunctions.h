@interface NSConcretePointerFunctions : NSPointerFunctions
- (id)init;
- (void)dealloc;
- (void)setAcquireFunction:;
- (BOOL)usesWeakReadAndWriteBarriers;
- (id)initWithOptions:;
- (void)setRelinquishFunction:;
- (void)setIsEqualFunction:;
- (id)acquireFunction;
- (id)sizeFunction;
- (unsigned long long)hash;
- (void)setSizeFunction:;
- (id)isEqualFunction;
- (id)descriptionFunction;
- (BOOL)usesStrongWriteBarrier;
- (void)setUsesStrongWriteBarrier:;
- (void)setUsesWeakReadAndWriteBarriers:;
- (id)relinquishFunction;
- (id)hashFunction;
- (void)setHashFunction:;
- (BOOL)isEqual:;
- (void)setDescriptionFunction:;
- (id)copyWithZone:;
+ (BOOL)initializeSlice:withOptions:;
+ (void)initializeBackingStore:sentinel:dynamic:;
@end
