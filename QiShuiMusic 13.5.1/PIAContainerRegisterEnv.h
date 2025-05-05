@interface PIAContainerRegisterEnv : NSObject
@property (nonatomic) <PIAInterfaceResourceLoaderProtocol> resourceLoader;
@property (nonatomic) NSDictionary globalProps;
- (void)setGlobalProps:;
- (id)globalProps;
- (void)setResourceLoader:;
- (void).cxx_destruct;
- (id)resourceLoader;
+ (id)defaultEnv;
@end
