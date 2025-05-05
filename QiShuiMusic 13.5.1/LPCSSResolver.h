@interface LPCSSResolver : NSObject
@property (nonatomic) NSMutableDictionary localVariables;
@property (nonatomic) LPTheme theme;
- (id)theme;
- (void).cxx_destruct;
- (id)initWithTheme:;
- (id)resolveCSSValue:;
- (void)enumerateResolvedRulesFromRuleDictionary:withBlock:;
- (id)ruleDictionaryForStyle:forComponentClass:;
- (void)addStyle:toElement:inComponent:;
- (id)localVariables;
@end
