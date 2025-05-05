@interface AMSMappedBundleInfo : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString clientName;
@property (nonatomic) NSString clientVersion;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString secureScheme;
@property (nonatomic) NSString accountMediaType;
- (id)bundleIdentifier;
- (id)clientName;
- (void)setScheme:;
- (id)secureScheme;
- (id)scheme;
- (void)setClientName:;
- (void)setAccountMediaType:;
- (void)setClientVersion:;
- (id)accountMediaType;
- (void)setSecureScheme:;
- (id)_initWithClient:processInfo:;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (id)clientVersion;
+ (id)_clientVersionFromProcessInfo:clientName:;
+ (id)_accountMediaTypeForClientName:bundleID:;
+ (id)bundleInfoForMobileAppStoreWithProcessInfo:;
+ (id)currentBundleInfo;
+ (id)_clientNameFromProcessInfo:;
+ (id)accountMediaTypeInfoForProcessInfo:;
+ (id)bundleInfoForProcessInfo:;
@end
