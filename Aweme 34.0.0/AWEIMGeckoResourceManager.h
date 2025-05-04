@interface AWEIMGeckoResourceManager : NSObject
+ (id)getThemeImageName:;
+ (void)fetchResourcesWhenFirstEnterIM;
+ (id)resoutceDirectoryForChannel:;
+ (id)dataForPath:channel:;
+ (id)imageWithContentsOfFile:channel:;
+ (id)darkOrLightImageForPath:channel:;
@end
