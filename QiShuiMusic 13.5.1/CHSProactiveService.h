@interface CHSProactiveService : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)suggestionBudgetsForStackIdentifiers:completion:;
- (void)loadSuggestedWidget:metrics:stackIdentifier:completion:;
- (id)initWithConnection:;
- (void)loadSuggestedWidget:withMetrics:completion:;
@end
