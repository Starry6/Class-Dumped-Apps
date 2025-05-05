@interface PHRecyclableObjectVendor : NSObject
- (id)initWithTargetClass:requiresThreadSafety:initialPoolSize:;
- (id)dequeueRecyclableObject;
- (void)recycleObject:;
- (void).cxx_destruct;
- (id)initWithTargetClass:requiresThreadSafety:initialPoolSize:prototypeStep:;
@end
