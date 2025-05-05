@interface AVAudioSessionRouteDescription : NSObject
@property (nonatomic) NSString siriRemoteInputIdentifier;
@property (nonatomic) Q siriInputSource;
@property (nonatomic) BOOL supportsSoftwareVolume;
@property (nonatomic) BOOL supportsDoAP;
@property (nonatomic) NSArray inputs;
@property (nonatomic) NSArray outputs;
- (id)inputs;
- (BOOL)supportsDoAP;
- (id)init;
- (void)dealloc;
- (unsigned long long)siriInputSource;
- (void)updateOutputPortsWithSpatialAudioStatus:;
- (BOOL)supportsSoftwareVolume;
- (id)outputs;
- (BOOL)isEqualToRoute:;
- (id)initWithRawDescription:owningSession:;
- (id)description;
- (id)siriRemoteInputIdentifier;
- (id)privateGetImplementation;
- (BOOL)isEqual:;
@end
