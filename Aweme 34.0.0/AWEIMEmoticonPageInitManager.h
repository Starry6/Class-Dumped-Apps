@interface AWEIMEmoticonPageInitManager : NSObject
+ (id)pageMap;
+ (id)localEmotionInfosWithContext:;
+ (void)registerThemeStyle:pageName:;
+ (void)registerThemeStyle:themeStandardStyle:pageName:;
+ (id)p_innerPageMap;
+ (id)p_innerStandardStyleMap;
+ (void)registerThemeStyle:themeStandardStyle:;
+ (void)registerAllPagesOnce;
+ (id)standardThemeStyleDictToEmoticonThemeStyle;
@end
