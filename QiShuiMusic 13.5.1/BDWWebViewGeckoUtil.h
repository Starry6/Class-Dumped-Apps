@interface BDWWebViewGeckoUtil : NSObject
+ (id)geckoAccessKey;
+ (id)geckoDataForPath:channel:;
+ (id)geckoSettingDict;
+ (id)geckoVersionForChannel:;
+ (BOOL)hasCacheForPath:channel:;
+ (void)updateGeckoAccessKey:;
@end
