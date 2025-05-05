@interface CTCATransmissionProgress : NSObject
@property (nonatomic) NSDate startedAt;
@property (nonatomic) NSNumber estimatedDurationSeconds;
@property (nonatomic) NSNumber progressPercents;
@property (nonatomic) q payloadType;
- (void)setStartedAt:;
- (id)startedAt;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)estimatedDurationSeconds;
- (void)setEstimatedDurationSeconds:;
- (id)progressPercents;
- (void)setProgressPercents:;
- (long long)payloadType;
- (void)setPayloadType:;
+ (BOOL)supportsSecureCoding;
@end
