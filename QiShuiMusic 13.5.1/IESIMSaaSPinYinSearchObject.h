@interface IESIMSaaSPinYinSearchObject : NSObject
@property (nonatomic) NSString pinYinWithoutSystemBlank;
@property (nonatomic) NSMutableArray components;
@property (nonatomic) NSString oriString;
@property (nonatomic) NSString pinYin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fullPinYinMatchRangeForKeyword:;
- (id)firstLetterMatchRangeForKeyword:;
- (id)matchRangeForKeyword:;
- (id)oriString;
- (id)pinYin;
- (id)pinYinWithoutSystemBlank;
- (void)setOriString:;
- (void)setPinYin:;
- (void)setPinYinWithoutSystemBlank:;
- (id)components;
- (id)init;
- (void)setComponents:;
- (void).cxx_destruct;
+ (void)checkOther:pinYin:idxPinYin:length:;
+ (id)completeCharacterRangeAtIndex:inString:;
+ (BOOL)isCharacterPinYin:;
+ (BOOL)isCharacterPinYinDiacritics:;
+ (id)pinYinSearchObjectWithOriginalString:pinYin:;
@end
