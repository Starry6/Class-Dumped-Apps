@interface SASidekickHubDeviceInfo : SABaseCommand
@property (nonatomic) NSString accessoryIdentifier;
@property (nonatomic) NSString hubDeviceType;
@property (nonatomic) NSString hubUserId;
@property (nonatomic) BOOL mediaPlaybackEnabled;
@property (nonatomic) NSString sidekickBrand;
@property (nonatomic) NSString sidekickDeviceType;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setMediaPlaybackEnabled:;
- (id)encodedClassName;
- (BOOL)mediaPlaybackEnabled;
- (id)accessoryIdentifier;
- (void)setAccessoryIdentifier:;
- (id)hubDeviceType;
- (void)setHubDeviceType:;
- (id)hubUserId;
- (void)setHubUserId:;
- (id)sidekickBrand;
- (void)setSidekickBrand:;
- (id)sidekickDeviceType;
- (void)setSidekickDeviceType:;
@end
