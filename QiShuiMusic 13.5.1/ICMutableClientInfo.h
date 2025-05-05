@interface ICMutableClientInfo : ICClientInfo
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString processName;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString clientVersion;
@property (nonatomic) NSString requestingBundleIdentifier;
@property (nonatomic) NSString requestingBundleVersion;
@property (nonatomic) NSString bagProfile;
@property (nonatomic) NSString bagProfileVersion;
- (void)setRequestingBundleIdentifier:;
- (void)setClientVersion:;
- (void)setRequestingBundleVersion:;
- (void)setBundleIdentifier:;
- (void)setBagProfile:;
- (void)setProcessName:;
- (void)setClientIdentifier:;
- (void)setBagProfileVersion:;
- (id)copyWithZone:;
@end
