@interface SARemembersGetAppMatchesForIntentResponse : SABaseCommand
@property (nonatomic) NSString jsonMatchSignals;
@property (nonatomic) NSString matchStatus;
@property (nonatomic) NSArray matchingBundleIDs;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)matchStatus;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)jsonMatchSignals;
- (void)setJsonMatchSignals:;
- (void)setMatchStatus:;
- (id)matchingBundleIDs;
- (void)setMatchingBundleIDs:;
+ (id)getAppMatchesForIntentResponse;
+ (id)getAppMatchesForIntentResponseWithDictionary:context:;
@end
