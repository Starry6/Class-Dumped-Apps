@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject
@property (nonatomic) NSXPCListenerEndpoint endpoint;
- (id)initWithCoder:;
- (id)initWithEndpoint:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)endpoint;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
