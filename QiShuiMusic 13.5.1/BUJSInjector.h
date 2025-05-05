@interface BUJSInjector : NSObject
@property (nonatomic) NSMutableOrderedSet rules;
- (void)removeAllScript;
- (void)addInjectRuleWithScript:regex:key:;
- (void)injectScriptInWebView:;
- (void)removeScriptWithKey:;
- (id)init;
- (id)rules;
- (void)setRules:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
