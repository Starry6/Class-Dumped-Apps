@interface AMSMediaSharedProperties : NSObject
@property (nonatomic) AMSURLSession session;
@property (nonatomic) <AMSMediaTokenServiceProtocol> tokenService;
- (id)tokenService;
- (void)dealloc;
- (id)session;
- (void).cxx_destruct;
- (id)_initWithClientIdentifier:account:bag:clientInfo:URLKnownToBeTrusted:;
+ (id)accessQueue;
+ (id)propertiesForMarketingItemTask:;
+ (id)propertiesForMediaTask:;
+ (id)propertiesForMercuryCacheFetchTask:;
+ (id)propertiesForRatingsTask:;
+ (id)propertiesForStorefrontsTask:;
+ (id)propertiesForUserNotificationSettingsTask:;
+ (id)_propertiesForClientIdentifier:account:bag:clientInfo:URLKnownToBeTrusted:;
+ (id)sharedPropertiesMapTable;
@end
