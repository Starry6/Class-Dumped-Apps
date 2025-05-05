@interface OSALogIdentity : NSObject
@property (nonatomic) NSString incidentID;
@property (nonatomic) NSString bugType;
- (id)incidentID;
- (id)initWithIncidentID:bugType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bugType;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
