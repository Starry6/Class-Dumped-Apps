@interface SASEndpointStatus : SABaseCommand
@property (nonatomic) BOOL confirmed;
@property (nonatomic) NSNumber endpointConfirmationTimestamp;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)confirmed;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setConfirmed:;
- (id)endpointConfirmationTimestamp;
- (void)setEndpointConfirmationTimestamp:;
+ (id)endpointStatus;
+ (id)endpointStatusWithDictionary:context:;
@end
