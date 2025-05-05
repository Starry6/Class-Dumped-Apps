@interface BDXBridgeVibrateMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)vibrateWithStyle:;
- (id)methodName;
+ (id)metaInfo;
@end
