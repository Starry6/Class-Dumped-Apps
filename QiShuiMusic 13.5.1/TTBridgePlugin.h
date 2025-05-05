@interface TTBridgePlugin : NSObject
@property (nonatomic) <TTBridgeEngine> engine;
- (BOOL)hasExternalHandleForMethod:params:callback:;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)handlerWithMethod:ofEngine:;
+ (void)registerHandlerBlock:forEngine:selector:;
+ (id)sharedPlugin;
+ (unsigned long long)authType;
+ (unsigned long long)instanceType;
@end
