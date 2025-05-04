@interface AWESearchDecoratorCombineBusiness : NSObject
@property (nonatomic) BDXBridgeEventSubscriber hotSearchCombineLynxShowSubscriber;
@property (nonatomic) BDXBridgeEventSubscriber hotSearchCombineLynxStaySubscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_registerEvent;
- (void)setBusinessModules:;
- (void)onDecoratorBusinessUpdateWithContext:businessParams:;
- (id)hotSearchCombineLynxShowSubscriber;
- (void)setHotSearchCombineLynxShowSubscriber:;
- (id)hotSearchCombineLynxStaySubscriber;
- (void)setHotSearchCombineLynxStaySubscriber:;
- (void).cxx_destruct;
+ (BOOL)getHasRegisterEvent;
+ (void)setHasRegisterEvent:;
+ (id)registeredModuleClasses;
@end
