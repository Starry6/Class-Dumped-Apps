@interface UIThreadSafeNode : NSObject
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (BOOL)conformsToProtocol:;
- (id)initWithNode:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)description;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
- (id)_realNode;
+ (id)threadSafeNodeWithNode:;
@end
