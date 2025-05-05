@interface IESLiveDanmakuDisplayTextParser : NSObject
- (double)baselineOffsetBetweenBiggerFont:smallerFont:;
- (id)parseGiftDanmukuMessage:roomModel:comboText:fontSizeSetting:diContext:;
+ (id)parseGiftDanmukuMessage:roomModel:comboText:fontSizeSetting:diContext:;
+ (id)shared;
@end
