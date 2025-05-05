@interface AFMyriadContext : NSObject
@property (nonatomic) Q timestamp;
@property (nonatomic) AFMyriadPerceptualAudioHash perceptualAudioHash;
@property (nonatomic) AFMyriadGoodnessScoreOverrideState overrideState;
@property (nonatomic) q activationSource;
@property (nonatomic) Q activationExpirationTime;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)timestamp;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTimestamp:perceptualAudioHash:overrideState:activationSource:activationExpirationTime:;
- (id)perceptualAudioHash;
- (id)overrideState;
- (long long)activationSource;
- (unsigned long long)activationExpirationTime;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
