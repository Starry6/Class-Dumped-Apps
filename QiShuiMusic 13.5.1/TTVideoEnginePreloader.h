@interface TTVideoEnginePreloader : NSObject
+ (void)engine:prelaod:;
+ (id)classSet;
+ (void)engine:cancelAllPrelaod:;
+ (void)engine:playInfo:;
+ (BOOL)hasRegistClass;
+ (void)notifyPreload:info:;
+ (void)notifyPreloadCancel:info:;
+ (BOOL)shouldPreload:;
+ (BOOL)registerClass:;
+ (void)unregisterClass:;
@end
