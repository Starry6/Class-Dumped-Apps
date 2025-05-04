@interface AWEShareShortURLHelper : NSObject
- (id)aAWESharePrepareURLStageCommonAdapter;
- (id)aAWEShareServiceDOUYINLiteAdaper;
- (void)addParametersToURLWithContext:;
+ (void)shortenURL:persistent:completion:;
+ (id)linkStringFormatWithSplitWord:description:urlString:;
+ (Class)aAWESharePrepareURLStageCommonAdapterClass;
+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;
+ (void)shortenURLWithContext:completion:;
+ (id)jointRandomPrefixWithToken:targetType:;
+ (id)defaultPatternConfig;
+ (id)randomNumberString;
+ (id)defaultRandomPrefixTypes;
@end
