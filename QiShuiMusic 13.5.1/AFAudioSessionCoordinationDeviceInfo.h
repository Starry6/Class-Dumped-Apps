@interface AFAudioSessionCoordinationDeviceInfo : NSObject
@property (nonatomic) AFPeerInfo peerInfo;
@property (nonatomic) AFAudioSessionCoordinationSystemInfo systemInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (id)systemInfo;
- (void).cxx_destruct;
- (id)peerInfo;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPeerInfo:systemInfo:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
