@interface AWEEcomSearchFIFOQueue : NSObject
@property (nonatomic) q capacity;
@property (nonatomic) NSMutableArray innerArray;
- (id)innerArray;
- (void)setInnerArray:;
- (id)init;
- (void)setCapacity:;
- (void)removeAllObjects;
- (long long)capacity;
- (void).cxx_destruct;
- (void)addObject:;
@end
