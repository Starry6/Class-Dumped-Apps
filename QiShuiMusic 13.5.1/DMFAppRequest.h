@interface DMFAppRequest : DMFTaskRequest
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSNumber storeItemIdentifier;
@property (nonatomic) NSURL manifestURL;
@property (nonatomic) NSString personaIdentifier;
- (id)bundleIdentifier;
- (id)storeItemIdentifier;
- (id)personaIdentifier;
- (id)initWithCoder:;
- (void)setPersonaIdentifier:;
- (void)setStoreItemIdentifier:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)manifestURL;
- (void)setManifestURL:;
+ (BOOL)supportsSecureCoding;
@end
