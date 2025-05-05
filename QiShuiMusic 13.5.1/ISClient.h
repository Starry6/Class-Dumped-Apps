@interface ISClient : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSString appleClientApplication;
@property (nonatomic) NSString userAgent;
@property (nonatomic) NSString appleClientVersions;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString partnerHeader;
@property (nonatomic) NSDictionary clientProvidedHeaders;
- (id)userAgent;
- (void)setUserAgent:;
- (id)init;
- (void)dealloc;
- (id)appleClientApplication;
- (id)localStoreFrontID;
- (id)clientProvidedHeaders;
- (id)identifier;
- (void)_softwareMapInvalidatedNotification:;
- (id)appleClientVersions;
- (id)lock;
- (id)_appleClientVersions;
- (void).cxx_destruct;
- (void)setAppleClientApplication:;
- (void)setClientProvidedHeaders:;
- (id)partnerHeader;
- (void)setPartnerHeader:;
- (void)setIdentifier:;
- (void)setLock:;
+ (id)currentClient;
@end
