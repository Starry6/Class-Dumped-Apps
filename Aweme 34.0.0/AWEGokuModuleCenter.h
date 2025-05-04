@interface AWEGokuModuleCenter : NSObject
- (id)safePerformAction:target:params:;
- (void)dispatchEvent:params:module:;
- (id)init;
+ (id)allocWithZone:;
+ (id)sharedCenter;
@end
