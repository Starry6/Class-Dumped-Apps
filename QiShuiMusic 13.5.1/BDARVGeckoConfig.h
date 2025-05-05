@interface BDARVGeckoConfig : NSObject
- (id)channelsWithAppID:;
- (id)rewardAccessyKey;
- (id)channel;
+ (id)sharedInstance;
@end
