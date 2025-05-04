@interface AWEPizzaSwiftBridging.PizzaEngineBridge : NSObject
- (id)generateComponentWithConfig:;
- (void)asyncVerifyComponent:completion:;
- (id)selectComponents:;
- (void)getComponentModelWithID:completion:;
- (void)showComponent:;
- (void)consumeComponent:;
- (void)hideComponent:;
- (void)queryComponentModelListWithComponentType:completion:;
- (void)registerVerifyComponent:completion:;
- (void)strategyVerifyComponent:completion:;
- (id)registerVerifyComponent:;
- (id)strategyVerifyComponent:;
- (id)init;
- (void)removeComponent:;
- (void).cxx_destruct;
- (void)addComponent:;
- (void)reset;
@end
