@interface AWEFeedEcomQueryCardTriggerPlayConfigMeta : NSObject
@property (nonatomic) q videoProgress;
@property (nonatomic) q picProgress;
@property (nonatomic) NSArray cardKey;
@property (nonatomic) NSDictionary params;
- (void)setCardKey:;
- (void)setVideoProgress:;
- (void)setPicProgress:;
- (long long)videoProgress;
- (long long)picProgress;
- (id)cardKey;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)metaWithParams:;
@end
