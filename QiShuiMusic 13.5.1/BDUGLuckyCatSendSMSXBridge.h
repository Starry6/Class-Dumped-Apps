@interface BDUGLuckyCatSendSMSXBridge : BDUGLuckyXBridgeMethod
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)messageComposeViewController:didFinishWithResult:;
- (id)methodName;
@end
