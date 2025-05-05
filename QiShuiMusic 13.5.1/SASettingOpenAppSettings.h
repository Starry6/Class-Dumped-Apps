@interface SASettingOpenAppSettings : SASettingOpenSettings
@property (nonatomic) NSString appWithSettingsId;
@property (nonatomic) NSString location;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray callbacks;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
- (id)appWithSettingsId;
- (void)setAppWithSettingsId:;
+ (id)openAppSettings;
+ (id)openAppSettingsWithDictionary:context:;
@end
