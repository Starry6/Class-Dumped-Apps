@interface BDXBridgeRegister : NSObject
@property (nonatomic) NSArray namespaces;
@property (nonatomic) NSArray namespaces;
- (id)_bridgeNamespaceWithMessage:;
- (id)bridgeMethodWithMessage:;
- (id)callHandlerWithMessage:;
- (void)registerBridgeMethod:;
- (id)namespaces;
- (id)init;
- (void)setNamespaces:;
- (void).cxx_destruct;
+ (id)sharedRegister;
@end
