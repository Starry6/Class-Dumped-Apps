@interface NSBlock : NSObject
- (id)copy;
- (void)invoke;
- (id)debugDescription;
- (id)copyWithZone:;
- (void)performAfterDelay:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
