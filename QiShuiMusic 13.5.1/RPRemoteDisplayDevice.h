@interface RPRemoteDisplayDevice : RPEndpoint
@property (nonatomic) NSString persistentIdentifier;
@property (nonatomic) NSDictionary cameraCapabilities;
@property (nonatomic) I flags;
- (id)descriptionWithLevel:;
- (void)setPersistentIdentifier:;
- (id)initWithCoder:;
- (id)persistentIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)flags;
- (unsigned int)updateWithEndpoint:;
- (id)cameraCapabilities;
- (void)setCameraCapabilities:;
+ (BOOL)supportsSecureCoding;
@end
