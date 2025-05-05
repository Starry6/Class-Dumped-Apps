@interface AVRetainReleaseWeakReference : AVWeakReference
- (id)init;
- (void)dealloc;
- (id)initWithReferencedObject:;
- (id)description;
- (id)referencedObject;
@end
