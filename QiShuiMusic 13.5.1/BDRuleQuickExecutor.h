@interface BDRuleQuickExecutor : NSObject
@property (nonatomic) NSString cel;
- (void)setCel:;
- (id)cel;
- (BOOL)evaluateWithEnv:error:;
- (id)initWithCel:;
- (void)logEventWithCost:;
- (void)logEventWithCost:envCost:;
- (void)logEventWithCost:envCost:code:;
- (id)valueOfKey:env:error:;
- (void).cxx_destruct;
@end
