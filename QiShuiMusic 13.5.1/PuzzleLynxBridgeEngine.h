@interface PuzzleLynxBridgeEngine : NSObject
@property (nonatomic) <IESHYHybridViewProtocol> hybridView;
@property (nonatomic) BDLynxBridge lynxBridge;
@property (nonatomic) @? willRegisterBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) q priority;
- (BOOL)canHandleMessage:;
- (id)convertWithCallMessage:;
- (BOOL)executeMethodWithMessage:onBridge:callback:;
- (void)handleMessage:resultHandler:;
- (id)hybridView;
- (id)lynxBridge;
- (void)resetBridgeAndViewIfNeeded;
- (void)setHybridView:;
- (void)setLynxBridge:;
- (void)setWillRegisterBlock:;
- (id)willRegisterBlock;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
+ (id)bridgeEngineWithHybridView:;
@end
