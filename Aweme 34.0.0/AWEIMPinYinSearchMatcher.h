@interface AWEIMPinYinSearchMatcher : NSObject
@property (nonatomic) NSString oriString;
@property (nonatomic) AWEIMChineseDecomposer decomposer;
@property (nonatomic) NSString pinYin;
@property (nonatomic) NSString initials;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)matchRangeForKeyword:;
- (id)fullPinYinMatchRangeForKeyword:;
- (id)firstLetterMatchRangeForKeyword:;
- (id)pinYin;
- (id)oriString;
- (id)prefixMatchRangeForKeyword:;
- (void)setOriString:;
- (void)setDecomposer:;
- (id)decomposer;
- (void).cxx_destruct;
- (id)initials;
+ (id)matcherWithString:;
@end
