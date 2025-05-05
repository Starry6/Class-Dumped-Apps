@interface AMSNotificationSettingsTask : AMSTask
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (void)setClientInfo:;
- (void)setAccount:;
- (id)clientInfo;
- (id)identifier;
- (void)setBag:;
- (id)updateSettings:;
- (void).cxx_destruct;
- (id)bag;
- (id)initWithIdentifier:account:bag:;
- (id)fetchAllSettings;
- (id)fetchSettingForIdentifier:;
- (id)fetchSettingsForSections:;
- (id)_generateParametersForItems:;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@end
