@interface PDSRegistrationAbandonedMetric : NSObject
@property (nonatomic) NSString failureReason;
@property (nonatomic) NSNumber registrationReason;
@property (nonatomic) NSDate heartbeatDate;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)failureReason;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithFailureReason:registrationReason:heartbeatDate:;
- (id)registrationReason;
- (id)heartbeatDate;
@end
