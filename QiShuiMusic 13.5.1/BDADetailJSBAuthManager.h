@interface BDADetailJSBAuthManager : NSObject
@property (nonatomic) NSMutableDictionary configData;
@property (nonatomic) NSDictionary publicJSBDict;
@property (nonatomic) NSDictionary publicEventDict;
@property (nonatomic) NSArray innerDomains;
@property (nonatomic) NSArray remoteInnerDomains;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)engine:isAuthorizedMeta:domain:;
- (id)publicEventDict;
- (id)adjustedDomains:;
- (id)configData;
- (BOOL)engine:isAuthorizedEvent:domain:;
- (void)engine:isAuthorizedEvent:domain:completion:;
- (BOOL)engine:isAuthorizedJSB:domain:;
- (void)engine:isAuthorizedJSB:domain:completion:;
- (id)innerDomains;
- (BOOL)isInnerDomain:;
- (id)publicJSBDict;
- (id)remoteInnerDomains;
- (void)setConfigData:;
- (void)setInnerDomains:;
- (void)setPublicEventDict:;
- (void)setPublicJSBDict:;
- (void)setRemoteInnerDomains:;
- (void)startGetAuthConfigWithPartnerClientKey:partnerDomain:secretKey:finishBlock:;
- (void)updateInnerDomainsFromRemote:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
