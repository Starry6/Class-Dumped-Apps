@interface AWEMusicTextAdjuster : NSObject
+ (id)pickText:tail:font:maxFontSize:minFontSize:withinWidthLimit:heightLimit:;
+ (id)pickText:fallbackText:font:maxFontSize:minFontSize:withinWidthLimit:heightLimit:;
@end
