@interface IESECStoreSearchHotWordModel : MTLModel
@property (nonatomic) NSString wordId;
@property (nonatomic) NSString word;
@property (nonatomic) Q wordsType;
@property (nonatomic) IESECURLModel wordsIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWordsIcon:;
- (void)setWordsType:;
- (id)wordsIcon;
- (unsigned long long)wordsType;
- (void).cxx_destruct;
- (id)wordId;
- (void)setWordId:;
- (id)word;
- (void)setWord:;
+ (id)wordsTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
