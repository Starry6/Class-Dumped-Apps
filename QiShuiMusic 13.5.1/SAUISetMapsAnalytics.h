@interface SAUISetMapsAnalytics : SABaseClientBoundCommand
@property (nonatomic) NSString extSessionGuid;
@property (nonatomic) NSDate extSessionGuidCreatedTimestamp;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)extSessionGuid;
- (void)setExtSessionGuid:;
- (id)extSessionGuidCreatedTimestamp;
- (void)setExtSessionGuidCreatedTimestamp:;
@end
