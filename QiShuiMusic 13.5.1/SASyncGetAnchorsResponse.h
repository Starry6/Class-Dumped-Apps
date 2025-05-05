@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand
@property (nonatomic) NSArray anchors;
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString primeToken;
@property (nonatomic) NSNumber syncDataReset;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authToken;
- (void)setAuthToken:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)primeToken;
- (void)setPrimeToken:;
- (id)anchors;
- (void)setAnchors:;
- (id)syncDataReset;
- (void)setSyncDataReset:;
+ (id)getAnchorsResponse;
+ (id)getAnchorsResponseWithDictionary:context:;
@end
