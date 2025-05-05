@interface IESIMSaaSAWEIMPinYinSearchMatcher : NSObject
@property (nonatomic) NSString oriString;
@property (nonatomic) IESIMSaaSAWEIMChineseDecomposer decomposer;
@property (nonatomic) NSString pinYin;
@property (nonatomic) NSString initials;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fullPinYinMatchRangeForKeyword:;
- (id)decomposer;
- (id)firstLetterMatchRangeForKeyword:;
- (id)matchRangeForKeyword:;
- (id)oriString;
- (id)pinYin;
- (void)setDecomposer:;
- (void)setOriString:;
- (void).cxx_destruct;
- (id)initials;
+ (id)matcherWithString:;
@end
