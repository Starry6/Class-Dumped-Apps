@interface BU_IESGurdCacheConfiguration : NSObject
@property (nonatomic) q cachePolicy;
@property (nonatomic) q channelLimitCount;
- (long long)channelLimitCount;
- (void)setChannelLimitCount:;
- (void)setCachePolicy:;
- (long long)cachePolicy;
+ (id)FIFOConfiguration;
+ (id)LRUConfiguration;
@end
