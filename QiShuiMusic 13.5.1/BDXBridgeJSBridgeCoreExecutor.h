@interface BDXBridgeJSBridgeCoreExecutor : NSObject
@property (nonatomic) IESBridgeEngine bridgeEngine;
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bridgeEngine;
- (BOOL)canHandleMessage:;
- (id)convertWithCallMessage:;
- (void)handleMessage:resultHandler:;
- (void)setBridgeEngine:;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (long long)priority;
+ (id)statusMessageWithStatusCode:;
@end
