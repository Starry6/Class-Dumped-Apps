@interface AWEPassportJSBridge : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)registerJSBridgeHandler;
+ (void)registerCodeJSBridgeHandler;
+ (void)registerNativeItemJSBridgeHandler;
+ (void)registerLoginJSBridgeHandler;
+ (void)registerPhoneJSBridgeHandler;
+ (void)registerOtherJSBridgeHandler;
+ (void)finishSwitchAccount;
+ (void)cancelSwitchAccount;
+ (Class)jsBridgeClass;
+ (Class)jsBridgeClass;
@end
