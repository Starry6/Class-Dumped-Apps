@interface AWEPOIParamsVerifyHelper : NSObject
@property (nonatomic) BOOL hasRegistedRule;
- (BOOL)hasRegistedRule;
- (void)setHasRegistedRule:;
- (void)registeRuleVerifier;
+ (id)sharedHelper;
@end
