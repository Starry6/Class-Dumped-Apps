@interface ASDBetaAppFeedbackMetadata : NSObject
@property (nonatomic) NSString incidentID;
@property (nonatomic) NSString email;
@property (nonatomic) ASDBetaAppVersion version;
- (id)incidentID;
- (void)setVersion:;
- (id)version;
- (id)initWithCoder:;
- (void)setIncidentID:;
- (void)setEmail:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)email;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
