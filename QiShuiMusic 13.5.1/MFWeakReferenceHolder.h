@interface MFWeakReferenceHolder : NSObject
- (id)reference;
- (void)dealloc;
- (id)_initWithObject:;
- (id)retainedReference;
+ (id)weakReferenceWithObject:;
@end
