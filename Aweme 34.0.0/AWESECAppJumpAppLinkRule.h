@interface AWESECAppJumpAppLinkRule : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString regex;
- (BOOL)matchRegexWithURL:;
- (long long)matchWithURL:;
- (id)regex;
- (id)init;
- (long long)type;
- (void)setType:;
- (void)setRegex:;
- (void).cxx_destruct;
+ (id)appLinkRuleWithPattern:;
@end
