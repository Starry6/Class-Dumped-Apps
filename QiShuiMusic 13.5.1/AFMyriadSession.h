@interface AFMyriadSession : NSObject
@property (nonatomic) Q generation;
@property (nonatomic) NSUUID sessionId;
@property (nonatomic) NSUUID currentElectionAdvertisementId;
@property (nonatomic) NSData currentElectionAdvertisementData;
@property (nonatomic) NSDictionary electionAdvertisementDataByIds;
- (id)sessionId;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)generation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithGeneration:sessionId:currentElectionAdvertisementId:currentElectionAdvertisementData:electionAdvertisementDataByIds:;
- (id)currentElectionAdvertisementId;
- (id)currentElectionAdvertisementData;
- (id)electionAdvertisementDataByIds;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
