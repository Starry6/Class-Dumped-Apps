@interface SACancelCrossDeviceRequest : SABaseClientBoundCommand
@property (nonatomic) BOOL cancelAssociatedRequests;
@property (nonatomic) NSString requestId;
- (id)groupIdentifier;
- (id)requestId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setRequestId:;
- (BOOL)cancelAssociatedRequests;
- (void)setCancelAssociatedRequests:;
@end
