@interface AWEPOIGeckoHelper : NSObject
+ (void)fetchResource:channel:completion:;
+ (BOOL)hasCacheForResource:channel:;
+ (void)asyncGetDataForResource:channel:completion:;
@end
