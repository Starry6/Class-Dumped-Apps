@interface IESIMSaaSIMPinYinCharacterItem : NSObject
@property (nonatomic) Q itemType;
@property (nonatomic) NSString originalCharacter;
@property (nonatomic) {_NSRange=QQ} originalRange;
@property (nonatomic) NSString pinYin;
@property (nonatomic) S oriUnichar;
- (unsigned short)oriUnichar;
- (id)originalCharacter;
- (id)pinYin;
- (void)setOriginalCharacter:;
- (void)setOriginalRange:;
- (void)setPinYin:;
- (void)setItemType:;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (id)originalRange;
+ (id)characterItemWithChinese:range:;
+ (id)characterItemWithAlpha:range:;
+ (id)characterItemWithOtherChar:range:;
@end
