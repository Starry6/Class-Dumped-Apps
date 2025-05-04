@interface AWEPOIVirgoStrategySmartLynxContainerObserver : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)strategyResultDidChange:withStrategyKey:;
- (id)initWithKey:container:;
- (BOOL)isEqualToObserverWithKey:container:;
- (void)setContainer:;
- (id)container;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
@end
