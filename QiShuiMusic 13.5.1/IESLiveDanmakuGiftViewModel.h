@interface IESLiveDanmakuGiftViewModel : NSObject
@property (nonatomic) NSAttributedString content;
@property (nonatomic) Q giftPrice;
@property (nonatomic) Q groupCount;
@property (nonatomic) Q comboCount;
@property (nonatomic) NSArray giftImageURLs;
@property (nonatomic) double giftImageSize;
@property (nonatomic) double height;
- (unsigned long long)comboCount;
- (double)giftImageSize;
- (id)giftImageURLs;
- (unsigned long long)giftPrice;
- (void)setComboCount:;
- (void)setGiftImageSize:;
- (void)setGiftImageURLs:;
- (void)setGiftPrice:;
- (id)content;
- (void)setContent:;
- (void)setGroupCount:;
- (unsigned long long)groupCount;
- (double)height;
- (void)setHeight:;
- (void).cxx_destruct;
@end
