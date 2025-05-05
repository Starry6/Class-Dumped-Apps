@interface DMFSendEventRequest : DMFTaskRequest
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSString inReplyTo;
@property (nonatomic) NSString eventType;
@property (nonatomic) NSDictionary details;
- (void)setDetails:;
- (void)setOrganizationIdentifier:;
- (id)organizationIdentifier;
- (id)eventType;
- (void)setEventType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)details;
- (id)inReplyTo;
- (void)setInReplyTo:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
