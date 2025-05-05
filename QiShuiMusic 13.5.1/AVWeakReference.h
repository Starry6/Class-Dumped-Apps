@interface AVWeakReference : NSObject
@property (nonatomic) @ referencedObject;
- (id)initWithReferencedObject:;
- (id)referencedObject;
+ (id)allocWithZone:;
@end
