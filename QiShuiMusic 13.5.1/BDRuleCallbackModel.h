@interface BDRuleCallbackModel : NSObject
@property (nonatomic) BDRuleModel rule;
@property (nonatomic) NSDictionary context;
- (void)didFinishExecuteWithResult:;
- (id)initWithRule:context:;
- (id)rule;
- (id)context;
- (void).cxx_destruct;
- (void)setRule:;
- (void)setContext:;
@end
