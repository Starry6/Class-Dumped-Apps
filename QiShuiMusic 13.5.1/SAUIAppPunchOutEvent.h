@interface SAUIAppPunchOutEvent : SABaseCommand
@property (nonatomic) NSString appDisplayName;
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSString originalCommandId;
@property (nonatomic) NSString punchOutName;
@property (nonatomic) NSURL punchOutUri;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)bundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setBundleId:;
- (id)originalCommandId;
- (void)setOriginalCommandId:;
- (id)appDisplayName;
- (void)setAppDisplayName:;
- (id)punchOutName;
- (void)setPunchOutName:;
- (id)punchOutUri;
- (void)setPunchOutUri:;
+ (id)appPunchOutEvent;
+ (id)appPunchOutEventWithDictionary:context:;
@end
