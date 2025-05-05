@interface SAFetchUserActivity : SABaseClientBoundCommand
@property (nonatomic) NSString internalGUID;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)internalGUID;
- (void)setInternalGUID:;
+ (id)fetchUserActivity;
+ (id)fetchUserActivityWithDictionary:context:;
@end
