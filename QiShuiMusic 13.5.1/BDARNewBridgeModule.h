@interface BDARNewBridgeModule : BDARVLynxBridgeModule
@property (nonatomic) NSMutableDictionary methodsForReward;
@property (nonatomic) NSArray baseBridgeMethods;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)baseBridgeMethods;
- (void)call:param:callback:;
- (BOOL)executeMethodWithMessage:onBridge:callback:;
- (BOOL)hasParamModel:withParams:;
- (id)initWithParam:;
- (id)methodsForReward;
- (void)setBaseBridgeMethods:;
- (void)setMethodsForReward:;
- (void).cxx_destruct;
- (long long)priority;
+ (id)methodLookup;
+ (id)name;
@end
