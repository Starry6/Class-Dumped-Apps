@interface IESGurdCacheConfiguration : NSObject
@property (nonatomic) q cachePolicy;
@property (nonatomic) q channelLimitCount;
@property (nonatomic) BOOL enableAppLog;
- (long long)channelLimitCount;
- (BOOL)enableAppLog;
- (void)setChannelLimitCount:;
- (void)setEnableAppLog:;
- (void)setCachePolicy:;
- (long long)cachePolicy;
+ (id)FIFOConfiguration;
+ (id)LRUConfiguration;
@end
