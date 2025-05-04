@interface AWEFeedSearchLongBarWords : AWEBaseApiModel
@property (nonatomic) NSArray words;
- (void).cxx_destruct;
- (void)setWords:;
- (id)words;
+ (id)wordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
