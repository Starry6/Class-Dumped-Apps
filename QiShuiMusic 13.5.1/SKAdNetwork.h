@interface SKAdNetwork : NSObject
+ (void)startImpression:completionHandler:;
+ (void)endImpression:completionHandler:;
+ (void)registerAppForAdNetworkAttribution;
+ (void)updateConversionValue:;
+ (void)updatePostbackConversionValue:completionHandler:;
+ (void)updatePostbackConversionValue:coarseValue:completionHandler:;
+ (void)updatePostbackConversionValue:coarseValue:lockWindow:completionHandler:;
@end
