@interface AVVCContextSettings : NSObject
@property (nonatomic) q activationMode;
@property (nonatomic) NSString activationDeviceUID;
@property (nonatomic) BOOL announceCallsEnabled;
- (void)setActivationMode:;
- (long long)activationMode;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithMode:deviceUID:;
- (id)activationDeviceUID;
- (void)setActivationDeviceUID:;
- (BOOL)announceCallsEnabled;
- (void)setAnnounceCallsEnabled:;
@end
