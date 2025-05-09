@interface AMSLookup : AMSTask
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSString caller;
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) NSString imageProfile;
@property (nonatomic) NSString keyProfile;
@property (nonatomic) NSString platform;
@property (nonatomic) q signatureType;
@property (nonatomic) q version;
@property (nonatomic) NSString language;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClientInfo:;
- (void)setPlatform:;
- (id)caller;
- (id)initWithBagContract:;
- (void)setKeyProfile:;
- (id)imageProfile;
- (id)contract;
- (void)setImageProfile:;
- (void)setLanguage:;
- (id)language;
- (id)keyProfile;
- (void)setVersion:;
- (long long)version;
- (id)clientInfo;
- (long long)signatureType;
- (void)setCaller:;
- (void)setBag:;
- (void)setSignatureType:;
- (id)platform;
- (id)performLookupWithBundleIdentifiers:itemIdentifiers:;
- (void).cxx_destruct;
- (void)setContract:;
- (id)initWithBagContract:caller:keyProfile:;
- (id)bag;
- (id)initWithBag:caller:keyProfile:;
- (void)_addJSSignatureToRequest:;
- (id)_compileQueryParametersWithBundleIds:itemIds:;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@end
