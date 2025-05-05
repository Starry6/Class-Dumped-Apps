@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand
@property (nonatomic) BOOL backgroundLaunch;
@property (nonatomic) NSString launchId;
@property (nonatomic) NSArray parameters;
@property (nonatomic) NSString utterance;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)launchId;
- (id)parameters;
- (BOOL)backgroundLaunch;
- (void)setLaunchId:;
- (id)encodedClassName;
- (void)setParameters:;
- (void)setBackgroundLaunch:;
- (id)utterance;
- (void)setUtterance:;
+ (id)intentInvocationResponse;
+ (id)intentInvocationResponseWithDictionary:context:;
@end
