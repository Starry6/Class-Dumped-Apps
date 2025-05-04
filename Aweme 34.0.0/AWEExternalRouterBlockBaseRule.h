@interface AWEExternalRouterBlockBaseRule : NSObject
@property (nonatomic) q ruleType;
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (void)handleURLString:context:scene:linkSession:completion:;
- (id)syncHandleURLString:context:scene:linkSession:;
- (long long)ruleType;
- (void)setRuleType:;
@end
