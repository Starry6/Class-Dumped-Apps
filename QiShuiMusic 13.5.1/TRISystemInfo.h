@interface TRISystemInfo : NSObject
@property (nonatomic) BOOL isEnrolledInBetaProgram;
@property (nonatomic) NSArray enabledInputModeIdentifiers;
@property (nonatomic) BOOL logUserSettingsLanguageCode;
@property (nonatomic) BOOL logUserSettingsRegionCode;
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode;
@property (nonatomic) NSString carrierBundleIdentifier;
@property (nonatomic) NSString carrierCountryIsoCode;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (void)setCarrierBundleIdentifier:;
- (void)setCarrierCountryIsoCode:;
- (BOOL)isEnrolledInBetaProgram;
- (BOOL)save;
- (void)setEnabledInputModeIdentifiers:;
- (id)initFromSystemWithFactorProvider:;
- (void)setLogUserKeyboardEnabledInputMode:;
- (id)enabledInputModeIdentifiers;
- (id)initWithCoder:;
- (BOOL)logUserSettingsRegionCode;
- (BOOL)logUserSettingsLanguageCode;
- (void)encodeWithCoder:;
- (BOOL)logUserKeyboardEnabledInputMode;
- (void).cxx_destruct;
- (void)setLogUserSettingsRegionCode:;
- (void)setLogUserSettingsLanguageCode:;
- (BOOL)saveToFile:;
- (void)setIsEnrolledInBetaProgram:;
+ (id)createSystemInfoWithFactorProvider:;
+ (id)systemInfoFromFile:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_sysIsProfileInstalledWithIdentifier:;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)loadSystemInfo;
+ (id)_persistentSystemInfoPath;
+ (id)_carrierBundleIdentifier;
+ (id)info;
+ (id)_carrierCountryIsoCode;
@end
