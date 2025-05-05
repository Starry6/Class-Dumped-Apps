@interface IESLivePublicScreenDisplayTextParser : NSObject
+ (void)appendUserPieceTo:piece:config:;
+ (void)appendGiftPieceTo:piece:config:;
+ (void)appendImagePieceTo:piece:config:;
+ (void)appendPatternRefPieceTo:piece:config:;
+ (void)appendStringPieceTo:piece:config:;
+ (id)colorWithPiece:defaultFormat:config:;
+ (double)fontSizeWithPiece:defaultFormat:config:;
+ (id)fontWithPiece:defaultFormat:config:;
+ (id)parseDisplayText:config:commonParser:;
@end
