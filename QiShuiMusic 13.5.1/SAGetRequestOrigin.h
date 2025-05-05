@interface SAGetRequestOrigin : SABaseClientBoundCommand
@property (nonatomic) NSString desiredAccuracy;
@property (nonatomic) NSNumber maxAge;
@property (nonatomic) NSNumber searchTimeout;
- (id)desiredAccuracy;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)maxAge;
- (void)setMaxAge:;
- (id)encodedClassName;
- (void)setDesiredAccuracy:;
- (BOOL)mutatingCommand;
- (id)searchTimeout;
- (void)setSearchTimeout:;
+ (id)getRequestOrigin;
+ (id)getRequestOriginWithDictionary:context:;
@end
