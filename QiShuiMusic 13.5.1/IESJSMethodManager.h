@interface IESJSMethodManager : NSObject
@property (nonatomic) <IESBridgeExecutor> executor;
- (id)allHandlerNames;
- (void)deleteAllPipers;
- (id)allJSMethodsForKey:;
- (void)checkAllJSMethodsDefinedForKey:withHandler:;
- (void)enumerateAllMethodsForKey:withHandler:;
- (void)queryPreferredJSMethodForKey:withHandler:;
- (void).cxx_destruct;
- (id)executor;
- (void)setExecutor:;
+ (id)injectionScriptWithJSMethod:messageHandler:;
+ (id)injectionScriptWithJSMethods:messageHandler:;
+ (id)managerWithBridgeExecutor:;
@end
