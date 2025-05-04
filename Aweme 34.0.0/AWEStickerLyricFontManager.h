@interface AWEStickerLyricFontManager : NSObject
+ (id)formatFontDicWithJSONStr:;
+ (void)fetchLyricFontResourceWithFontName:completion:;
+ (void)downloadLyricFontIfNeeded;
+ (id)effectModelWithFontName:;
+ (id)formatFontDicWithJSONStr:key:;
+ (void)downloadLyricFontWithEffectModel:completion:;
+ (void)fetchLyricFontEffectModelsWithCompletion:;
@end
