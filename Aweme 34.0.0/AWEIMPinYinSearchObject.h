@interface AWEIMPinYinSearchObject : NSObject
@property (nonatomic) NSString pinYinWithoutSystemBlank;
@property (nonatomic) NSMutableArray components;
@property (nonatomic) NSString oriString;
@property (nonatomic) NSString pinYin;
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
- (void)setPinYin:;
- (void)setOriString:;
- (id)pinYinWithoutSystemBlank;
- (void)setPinYinWithoutSystemBlank:;
- (id)init;
- (void)setComponents:;
- (void).cxx_destruct;
- (id)components;
+ (id)pinYinSearchObjectWithOriginalString:pinYin:;
+ (BOOL)isCharacterPinYin:;
+ (id)completeCharacterRangeAtIndex:inString:;
+ (void)checkOther:pinYin:idxPinYin:length:;
+ (BOOL)isCharacterPinYinDiacritics:;
@end
