@interface AWESearchHomeWeatherAndWordsHelper : NSObject
+ (void)getCacheForIdentifier:completionInMain:;
+ (void)saveDataForIdentifier:withData:completionInMain:;
+ (void)saveDataForIdentifier:withData:completionInAsyncQueue:;
+ (void)getCacheForIdentifier:completionInAsyncQueue:;
@end
