@interface NUISizeCache : NSObject
- (void)invalidateCache;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initForAsynchronousAccess:;
- (BOOL)getSize:forTargetSize:isSizeDependentOnPerpendicularAxis:;
- (void)insertSize:forTargetSize:;
@end
