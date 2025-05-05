@interface AFExperimentServerConfigurationInfo : NSObject
@property (nonatomic) NSString configurationIdentifier;
@property (nonatomic) NSURL configurationURL;
@property (nonatomic) double maxTimeToSync;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configurationIdentifier;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (id)configurationURL;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithConfigurationIdentifier:configurationURL:maxTimeToSync:;
- (double)maxTimeToSync;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
