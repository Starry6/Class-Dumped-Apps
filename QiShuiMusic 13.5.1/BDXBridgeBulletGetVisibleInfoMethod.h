@interface BDXBridgeBulletGetVisibleInfoMethod : BDXBridgeMethod
@property (nonatomic) <BDXContainerProtocol> container;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)setContainer:;
- (id)container;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
