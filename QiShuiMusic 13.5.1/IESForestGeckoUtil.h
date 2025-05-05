@interface IESForestGeckoUtil : NSObject
@property (nonatomic) IESForestExpiringObjectSet recentUpdatedChannels;
- (id)recentUpdatedChannels;
- (void)setRecentUpdatedChannels:;
- (id)init;
- (void).cxx_destruct;
+ (void)syncChannel:accessKey:modelActivePolicy:;
+ (id)sharedInstance;
@end
