@interface MTLResourceList : NSObject
- (void)dealloc;
- (void)releaseAllObjectsAndReset;
- (id)initWithCapacity:;
@end
