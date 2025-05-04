@interface AWEIMFTSKeywordProcessor : NSObject
@property (nonatomic) NSRegularExpression chineseRex;
@property (nonatomic) NSMutableCharacterSet specialCharacterSet;
- (id)specialCharacterSet;
- (id)chineseRex;
- (BOOL)p_needAppendAsterisk:;
- (BOOL)p_needSearchPinyin:;
- (BOOL)p_needSearchFirstLetter:;
- (void)setChineseRex:;
- (void)setSpecialCharacterSet:;
- (id)generateSearchKeywordsFromKeyword:;
- (id)getSpaceFuzzySearchKeyword:;
- (BOOL)p_needIgnoreWordCase;
- (BOOL)needAppendAsterisk:;
- (id)init;
- (void).cxx_destruct;
+ (id)generateSpaceSplittedStringOf:;
@end
