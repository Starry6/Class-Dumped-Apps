@interface BDWebInterceptorArray : NSObject
@property (nonatomic) NSMutableArray innerArray;
- (id)copyAsNSArray;
- (id)innerArray;
- (void)setInnerArray:;
- (id)init;
- (void)dealloc;
- (BOOL)containsObject:;
- (void)addObject:;
- (unsigned long long)indexOfObject:;
- (void)removeObject:;
- (void).cxx_destruct;
@end
