@interface AWEPOIDetailIntentActionExtension : NSObject
@property (nonatomic) BOOL hasTriggeredGoodsDetailNotification;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeExtension;
- (void)notifyIntentActionForType:;
- (void)handleGoodDetailExitNotification:;
- (BOOL)hasTriggeredGoodsDetailNotification;
- (void)setHasTriggeredGoodsDetailNotification:;
- (void)setContainer:;
- (id)container;
- (void)dealloc;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
