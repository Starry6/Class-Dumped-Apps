@interface IESLiveDanmakuGiftSizeSetting : NSObject
@property (nonatomic) double contentFontSize;
@property (nonatomic) double linkCharFontSize;
@property (nonatomic) double comboNumberFontSize;
@property (nonatomic) double groupNumberFontSize;
@property (nonatomic) double giftImageSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)contentFontSize;
- (double)comboNumberFontSize;
- (double)giftImageSize;
- (double)groupNumberFontSize;
- (double)linkCharFontSize;
- (void)setComboNumberFontSize:;
- (void)setContentFontSize:;
- (void)setGiftImageSize:;
- (void)setGroupNumberFontSize:;
- (void)setLinkCharFontSize:;
@end
