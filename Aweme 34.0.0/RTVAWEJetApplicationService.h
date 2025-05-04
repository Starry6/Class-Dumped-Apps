@interface RTVAWEJetApplicationService : RTVJetBaseApplicationService
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVJetWebAccessInterface> webAccess;
- (void)rxAwakeFromPropertyInjection;
- (id)webAccess;
- (id)injector;
- (void).cxx_destruct;
@end
