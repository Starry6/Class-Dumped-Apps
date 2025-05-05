@interface IESECShopPageContextV2 : IESECContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createServiceProxyForProtocol:;
- (void)registerService:toProtocol:;
- (void)registerServiceClass:forProtocol:;
- (void)retainService:;
- (Class)serviceClassForProtocol:;
- (id)serviceForProtocol:;
- (id)init;
- (void).cxx_destruct;
@end
