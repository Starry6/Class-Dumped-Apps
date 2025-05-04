@interface AWEProfilePromptModel : AWEBaseApiModel
@property (nonatomic) Q code;
@property (nonatomic) BOOL hasPrompt;
@property (nonatomic) NSString prompt;
- (void)setHasPrompt:;
- (unsigned long long)code;
- (void)setPrompt:;
- (void)setCode:;
- (id)prompt;
- (void).cxx_destruct;
- (BOOL)hasPrompt;
+ (id)JSONKeyPathsByPropertyKey;
@end
