@interface MTLResourceListPool : NSObject
- (void)purge;
- (void)dealloc;
- (int)availableCount;
- (id)initWithResourceListCapacity:;
@end
