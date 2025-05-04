@interface AWELLMChatAnswerModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSArray keywords;
- (id)keywords;
- (void)setText:;
- (id)text;
- (void)setKeywords:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)keywordsJSONTransformer;
@end
