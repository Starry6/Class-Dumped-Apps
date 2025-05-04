@interface AWEAppStoreMediator : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString creativeID;
@property (nonatomic) NSString extra;
@property (nonatomic) NSDate begin;
- (void)setExtra:;
- (void)setCreativeID:;
- (void)handleLoadSuccess:;
- (void)preloadWithAppID:downloadUrl:SKANParams:adID:logExtra:referString:ppid:downloadScene:webURL:complianceData:completion:;
- (void)trackEvent:label:appID:creativeID:extra:extraAttributes:;
- (void)trackAppStoreCompleteDurationWithAppID:creativeID:extra:;
- (void)preloadWithAppID:downloadUrl:SKANParams:adID:logExtra:referString:ppid:completion:;
- (void)trackAppStoreWithAppID:creativeID:extra:;
- (void)trackAppStoreCompleteWithAppID:creativeID:extra:success:;
- (id)begin;
- (id)init;
- (void)dealloc;
- (id)extra;
- (id)appID;
- (void)setAppID:;
- (void).cxx_destruct;
- (void)setBegin:;
- (id)creativeID;
+ (id)ntType;
+ (id)sharedInstance;
@end
