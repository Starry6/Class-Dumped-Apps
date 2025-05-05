@interface TTAVPlayerOpenGLActivity : NSObject
+ (void)checkBroken;
+ (void)start;
+ (void)stop;
+ (BOOL)isActive;
+ (BOOL)isBroken;
@end
