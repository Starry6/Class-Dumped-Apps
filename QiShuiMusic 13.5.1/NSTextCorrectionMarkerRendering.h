@interface NSTextCorrectionMarkerRendering : NSObject
+ (id)colorForSpellType_iOS:;
+ (id)_patternColorForSpellType_iOS:size:gap:imageSize:;
+ (long long)textCorrectionMarkerTypeWithAttributes:;
+ (id)colorForType:font:imageSize:;
+ (void)drawCorrectionMarkerOfType:font:origin:width:graphicsContext:;
@end
