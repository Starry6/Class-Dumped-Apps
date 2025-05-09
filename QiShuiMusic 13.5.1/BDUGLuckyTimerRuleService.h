@interface BDUGLuckyTimerRuleService : NSObject
@property (nonatomic) NSMutableDictionary ruleExecuteClassDic;
@property (nonatomic) NSMutableDictionary ruleListenerDic;
@property (nonatomic) NSMutableDictionary ruleDic;
@property (nonatomic) BOOL hasRegisterRuleExecuteClass;
@property (nonatomic) NSLock hasRegisterRuleLock;
@property (nonatomic) NSString gaiaMethodKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ruleDic;
- (id)ruleListenerDic;
- (void)setHasRegisterRuleExecuteClass:;
- (void)__addSatisfyStatusChangeObserverWithRule:;
- (id)gaiaMethodKey;
- (BOOL)hasRegisterRuleExecuteClass;
- (id)hasRegisterRuleLock;
- (void)registerRuleClass:;
- (id)registerRuleListener:rules:;
- (id)ruleExecuteClassDic;
- (void)setGaiaMethodKey:;
- (void)setHasRegisterRuleLock:;
- (void)setRuleDic:;
- (void)setRuleExecuteClassDic:;
- (void)setRuleListenerDic:;
- (void)unregisterRuleListener:;
- (id)init;
- (void).cxx_destruct;
@end
