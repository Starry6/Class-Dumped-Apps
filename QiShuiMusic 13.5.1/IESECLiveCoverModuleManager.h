@interface IESECLiveCoverModuleManager : NSObject
@property (nonatomic) UIView virtualContainer;
@property (nonatomic) UIResponder currentComponent;
@property (nonatomic) UIView container;
@property (nonatomic) UIViewController containerController;
- (void)attachComponent:;
- (id)containerController;
- (id)currentComponent;
- (void)deAttachComponent;
- (id)initWithContainer:containerController:;
- (void)setContainerController:;
- (void)setCurrentComponent:;
- (void)setVirtualContainer:;
- (id)virtualContainer;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end
