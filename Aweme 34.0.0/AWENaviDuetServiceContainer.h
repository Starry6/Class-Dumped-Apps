@interface AWENaviDuetServiceContainer : IESStaticContainer
@property (nonatomic) <TTKNaviFeatureComponentController> componentController;
@property (nonatomic) AWENaviEffectContextModel contextModel;
- (id)contextModel;
- (void)setContextModel:;
- (id)initWithParentContainer:contextModel:;
- (id)provideSingleton:AWENaviDuetRenderServiceProtocol:;
- (void)setComponentController:;
- (void).cxx_destruct;
- (id)componentController;
@end
