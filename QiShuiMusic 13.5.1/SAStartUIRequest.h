@interface SAStartUIRequest : SABaseClientBoundCommand
@property (nonatomic) SAStartRequest startRequest;
@property (nonatomic) SAStartLocalRequest startLocalRequest;
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray callbacks;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)startRequest;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)startLocalRequest;
- (void)setStartLocalRequest:;
- (void)setStartRequest:;
+ (id)startUIRequest;
+ (id)startUIRequestWithDictionary:context:;
@end
