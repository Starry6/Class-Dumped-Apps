@interface BDXBridgeEngineAdapter_TTBridgeUnify : NSObject
@property (nonatomic) <TTBridgeEngine> engine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deregisterLocalMethodWithMethodName:;
- (void)fireEventWithEventName:params:;
- (void)registerLocalMethodWithMethodName:authType:engineTypes:callHandler:;
- (id)initWithContainer:;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (BOOL)compitableWebV1;
+ (unsigned long long)mappedAuthType:;
+ (void)deregisterGlobalMethodWithMethodName:;
+ (id)firstBridgeNames;
+ (long long)mappedEngineTypes:;
+ (void)registerGlobalMethodWithMethodName:authType:engineTypes:callHandler:;
+ (void)registerMethodWithMethodName:authType:engineTypes:callHandler:inRegistry:;
+ (void)setCompitableWebV1:;
+ (void)setFirstBridgeNames:;
@end
