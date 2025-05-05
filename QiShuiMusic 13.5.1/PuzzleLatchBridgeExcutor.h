@interface PuzzleLatchBridgeExcutor : NSObject
@property (nonatomic) NSMutableDictionary methodHandlerMap;
@property (nonatomic) NSMutableDictionary methodHandlerMapNew;
@property (nonatomic) UIView<IESLiveHybridContainerProtocol> hybridContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hybridContainer;
- (void)excuteLatchLynxMethodSetShellWithMessage:callback:;
- (void)excuteLatchLynxMethodWithMessage:callback:;
- (id)initWithHybridContainer:;
- (void)invokeEvent:params:;
- (BOOL)isRegisteredMethod:;
- (id)methodHandlerMap;
- (id)methodHandlerMapNew;
- (id)privateSet;
- (id)protectedSet;
- (id)publicCallSet;
- (void)registerHandlerBlock:forMethod:authType:;
- (void)registerNewHandlerBlock:forMethod:authType:;
- (void)setMethodHandlerMap:;
- (void)setMethodHandlerMapNew:;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
