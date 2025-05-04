@interface AWEMultiElementContainerViewModel : NSObject
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> viewController;
@property (nonatomic) AWEMultiElementContainer elementContainer;
@property (nonatomic) AWEElementBuilder elementBuilder;
@property (nonatomic) NSArray filterStrategyIDs;
@property (nonatomic) NSArray layoutStrategyIDs;
@property (nonatomic) AWEAwemeModel aweModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)elementContainer;
- (id)aweModel;
- (void)setAweModel:;
- (void)setElementContainer:;
- (void)bindElementContainer:;
- (id)initWithViewController:strategyIDs:layoutStrategyIDs:;
- (id)filterStrategyIDs;
- (id)layoutStrategyIDs;
- (void)setElementBuilder:;
- (void)setFilterStrategyIDs:;
- (void)setLayoutStrategyIDs:;
- (void)setModel:;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)elementBuilder;
@end
