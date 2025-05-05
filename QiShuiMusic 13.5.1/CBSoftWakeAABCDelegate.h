@interface CBSoftWakeAABCDelegate : NSObject
@property (nonatomic) {CustomCurve=[20f][20f]i} curve;
- (id)init;
- (id)curve;
- (BOOL)isActive;
- (long long)action:;
+ (BOOL)isSupported;
@end
