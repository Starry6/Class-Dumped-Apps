@interface BDXBridgeSendSMSMethod : BDXBridgeMethod
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)messageComposeViewController:didFinishWithResult:;
- (id)methodName;
+ (id)metaInfo;
@end
