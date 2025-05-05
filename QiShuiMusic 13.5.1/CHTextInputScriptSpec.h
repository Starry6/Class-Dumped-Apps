@interface CHTextInputScriptSpec : NSObject
+ (BOOL)shouldCorrectionGesturesSnapToTokensForScriptCode:;
+ (BOOL)isSkippableScriptCode:;
+ (int)singleScriptCodeForString:;
+ (int)scriptCodeForCodepoint:;
+ (BOOL)isCharacterFullWidth:;
+ (BOOL)isRightToLeftScriptForCharacter:;
+ (BOOL)shouldRelaxCharacterBoundsPercentageOverlapForScript:;
+ (BOOL)isCharacterEmoji:;
+ (id)scriptHistogramForString:;
@end
