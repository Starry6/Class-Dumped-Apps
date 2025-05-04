@interface AWEMainJsBridgeRegister : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)registerJSBridgeHandler;
+ (id)findWebViewController:;
+ (BOOL)enableDeprcatedJSB;
+ (void)registerDeprcatedJSB:;
+ (void)registerJSZMCertHandler;
+ (void)registerJSComplianceHandler;
+ (void)registerJSSocialHandler:;
+ (void)registerJSMusicHandler;
+ (void)saveImageAction:jsBridge:success:apiContext:pageContext:;
+ (void)showReportSuccessAlert;
+ (id)coverForAVAsset:;
+ (void)registerJSProAccountHandler:callbackId:;
+ (BOOL)shouldEncrypted;
@end
