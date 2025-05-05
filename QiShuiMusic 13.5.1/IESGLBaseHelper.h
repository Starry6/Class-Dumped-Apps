@interface IESGLBaseHelper : NSObject
+ (void)draw:shouldClear:waitFinish:inputFramebuffer:outputFramebuffer:;
+ (void)draw:shouldClear:inputFramebuffer:outputFramebuffer:;
+ (void)draw:textures:vertices:shouldClear:outputFramebuffer:;
+ (void)draw:textures:vertices:shouldClear:waitFinish:outputFramebuffer:;
+ (unsigned int)gLFactorFromVEBlendFactor:;
@end
