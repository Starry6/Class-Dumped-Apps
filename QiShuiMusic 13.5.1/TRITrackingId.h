@interface TRITrackingId : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSDate time;
@property (nonatomic) NSArray treatments;
@property (nonatomic) TRISubject subject;
- (id)init;
- (id)subject;
- (id)time;
- (id)uuid;
- (id)initWithUUID:time:treatments:subjectProvider:projectId:;
- (id)treatments;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithUUID:time:treatments:subject:;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)trackingIdWithProjectId:paths:;
+ (id)trackingIdWithProjectId:paths:treatments:;
@end
