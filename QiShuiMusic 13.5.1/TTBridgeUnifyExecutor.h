@interface TTBridgeUnifyExecutor : NSObject
@property (nonatomic) TTBridgeRegister reg;
@property (nonatomic) <TTBridgeEngine> engine;
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reg;
- (void)setReg:;
- (BOOL)canHandleMessage:;
- (id)convertWithCallMessage:;
- (void)handleMessage:resultHandler:;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)engine;
- (void)setEngine:;
- (id)container;
- (void).cxx_destruct;
- (long long)priority;
+ (id)statusMessageWithStatusCode:;
@end
