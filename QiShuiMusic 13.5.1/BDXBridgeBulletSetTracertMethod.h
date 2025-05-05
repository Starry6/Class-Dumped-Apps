@interface BDXBridgeBulletSetTracertMethod : BDXBridgeMethod
@property (nonatomic) <BDXContainerProtocol> container;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)setContainer:;
- (id)container;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
