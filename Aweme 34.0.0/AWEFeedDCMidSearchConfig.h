@interface AWEFeedDCMidSearchConfig : NSObject
+ (long long)initOuterRetryTimes;
+ (long long)innerRetryTimes;
+ (long long)outerRetryTimeOut;
+ (BOOL)enableSystemTransition;
+ (BOOL)enableSearchDCFeedNetOpt;
+ (BOOL)enableFixSearchDCFeed;
+ (BOOL)disableShowTag;
@end
