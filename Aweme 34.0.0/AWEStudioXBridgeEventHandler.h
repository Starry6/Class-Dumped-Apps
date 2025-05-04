@interface AWEStudioXBridgeEventHandler : NSObject
+ (void)subscribeImpl;
+ (void)activity_preload_video:;
+ (void)subscribeEventWithSEL:;
+ (void)activity_preload_music:;
+ (void)activity_preload_prop:;
+ (void)activity_preload_mv:;
+ (void)p_logInfo:;
+ (void)p_logError:;
+ (BOOL)p_containsKey:category:;
+ (void)p_addKey:category:;
+ (id)p_cacheDictionary;
+ (void)subscribe;
@end
