@interface FigWeakReference : NSObject
@property (nonatomic) @ referencedObject;
- (void)dealloc;
- (id)initWithReferencedObject:;
- (id)retainReferencedObject;
- (id)referencedObject;
+ (id)weakReferenceToObject:;
@end
