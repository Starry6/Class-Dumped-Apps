@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand
@property (nonatomic) NSArray candidateBundleIDs;
@property (nonatomic) NSString jsonEncodedIntent;
@property (nonatomic) SAIntentGroupProtobufMessage protoEncodedIntent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
- (id)candidateBundleIDs;
- (void)setCandidateBundleIDs:;
- (id)protoEncodedIntent;
- (void)setProtoEncodedIntent:;
+ (id)getAppMatchesForIntent;
+ (id)getAppMatchesForIntentWithDictionary:context:;
@end
