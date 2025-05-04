@interface AWEFullPagePicSearchManager : NSObject
+ (id)getFullPagePicSearchConfigWithAwemeModel:;
+ (void)fullPageOpenPicSearchWithImage:enterFrom:awemeModel:;
+ (void)trackFullPageShowPicSearchWithPicSearchConfig:enterFrom:awemeModel:;
+ (void)trackFullPageClickPicSearchWithPicSearchConfig:enterFrom:awemeModel:;
@end
