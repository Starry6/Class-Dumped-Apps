@interface BDADSDK.GeckoManager : NSObject
- (void)gurdKitDidSetup;
- (void)registerAndPreloadCommerceGecko;
- (void)clearGeckoResourceFor:;
- (id)dataFor:channel:;
- (id)geckoAccessKey;
- (BOOL)hasGeckoResourceFor:;
- (void)updateGurdPollWith:;
- (void)updateGurdPollWith:completion:;
- (id)init;
- (void).cxx_destruct;
+ (id)LocalGeckoAccessKey;
+ (id)OnlineGeckoAccessKey;
+ (id)GurdKitDidRegisterACNotification;
+ (id)shared;
@end
