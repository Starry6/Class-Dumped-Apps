@interface BDADetailJSInjectorRule : NSObject
@property (nonatomic) NSRegularExpression regExpression;
@property (nonatomic) NSString script;
@property (nonatomic) NSString regex;
@property (nonatomic) NSString key;
- (id)regExpression;
- (void)setRegExpression:;
- (id)regex;
- (id)key;
- (unsigned long long)hash;
- (void)setKey:;
- (void)setRegex:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)script;
- (void)setScript:;
+ (id)ruleWithScript:withRegex:key:;
@end
