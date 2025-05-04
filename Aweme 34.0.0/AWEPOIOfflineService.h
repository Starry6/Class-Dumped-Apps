@interface AWEPOIOfflineService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadOfflineGeckoWithChannelName:urlString:;
- (id)init;
- (id)shared;
+ (id)sharedInstance;
@end
