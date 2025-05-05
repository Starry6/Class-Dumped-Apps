@interface BDXBridgeLynxBridgeExecutor : NSObject
@property (nonatomic) BDLynxBridge lynxBridge;
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandleMessage:;
- (id)convertWithCallMessage:;
- (void)handleMessage:resultHandler:;
- (id)lynxBridge;
- (void)setLynxBridge:;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (long long)priority;
@end
