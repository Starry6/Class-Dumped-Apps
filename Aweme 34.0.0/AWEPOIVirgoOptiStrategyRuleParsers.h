@interface AWEPOIVirgoOptiStrategyRuleParsers : NSObject
@property (nonatomic) AWEPOIVirgoCharactersManager charactersManager;
- (id)checkRules:;
- (BOOL)checkRule:;
- (id)convertToPostfix:;
- (BOOL)evaluatePostfixExpression:rule:;
- (BOOL)excuteCharactorOperator:rule:;
- (id)charactersManager;
- (id)checkAllRules:;
- (void)setCharactersManager:;
- (void).cxx_destruct;
- (id)tokenize:;
- (BOOL)isLetter:;
@end
