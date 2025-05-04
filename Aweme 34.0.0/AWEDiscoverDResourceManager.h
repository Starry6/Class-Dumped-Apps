@interface AWEDiscoverDResourceManager : NSObject
+ (id)loadFontFromData:size:completion:;
+ (id)dataForPath:channel:;
+ (id)imageForPath:channel:;
+ (id)onlineFontName:FontForSize:defaultFont:;
+ (BOOL)hasOnlineFont:;
@end
