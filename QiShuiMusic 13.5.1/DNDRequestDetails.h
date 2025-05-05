@interface DNDRequestDetails : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSUUID auditUUID;
@property (nonatomic) Q timestamp;
- (id)auditUUID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:auditUUID:timestamp:;
- (unsigned long long)timestamp;
- (id)description;
- (id)clientIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)detailsRepresentingNowWithClientIdentifier:;
@end
