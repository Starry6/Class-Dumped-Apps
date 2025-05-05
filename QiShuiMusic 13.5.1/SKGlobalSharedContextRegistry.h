@interface SKGlobalSharedContextRegistry : NSObject
+ (void)setPrefersOpenGL:;
+ (BOOL)getPrefersOpenGL;
+ (id)globalGLSharedContext;
+ (void)setGlobalGLSharedContext:;
+ (id)globalMetalDevice;
+ (void)setGlobalMetalDevice:;
@end
