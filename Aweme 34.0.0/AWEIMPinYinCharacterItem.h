@interface AWEIMPinYinCharacterItem : NSObject
@property (nonatomic) Q itemType;
@property (nonatomic) NSString originalCharacter;
@property (nonatomic) {_NSRange=QQ} originalRange;
@property (nonatomic) NSString pinYin;
@property (nonatomic) S oriUnichar;
- (id)pinYin;
- (void)setPinYin:;
- (void)setOriginalCharacter:;
- (void)setOriginalRange:;
- (id)originalCharacter;
- (unsigned short)oriUnichar;
- (unsigned long long)itemType;
- (void)setItemType:;
- (void).cxx_destruct;
- (id)originalRange;
+ (id)characterItemWithChinese:range:;
+ (id)characterItemWithAlpha:range:;
+ (id)characterItemWithOtherChar:range:;
@end
