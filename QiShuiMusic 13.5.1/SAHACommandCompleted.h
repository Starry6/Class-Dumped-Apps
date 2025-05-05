@interface SAHACommandCompleted : SABaseCommand
@property (nonatomic) NSArray actionResults;
@property (nonatomic) NSString clientValidity;
@property (nonatomic) NSString commandOutcome;
@property (nonatomic) NSURL homeIdentifier;
@property (nonatomic) NSString serverValidity;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)homeIdentifier;
- (void)setHomeIdentifier:;
- (void)setActionResults:;
- (void)setCommandOutcome:;
- (id)actionResults;
- (id)clientValidity;
- (void)setClientValidity:;
- (id)commandOutcome;
- (id)serverValidity;
- (void)setServerValidity:;
+ (id)commandCompleted;
+ (id)commandCompletedWithDictionary:context:;
@end
