@interface BUInterfaceBaseObject : NSObject
- (BOOL)respondsToSelector:;
- (id)valueForUndefinedKey:;
- (id)forwardingTargetForSelector:;
+ (BOOL)isPublicUse;
+ (BOOL)respondsToSelector:;
+ (id)forwardingTargetForSelector:;
@end
