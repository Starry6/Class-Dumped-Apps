@interface SAIntentGroupResolveAppForIntentResponse : SABaseCommand
@property (nonatomic) NSArray appsList;
@property (nonatomic) NSNumber needsConfirmation;
@property (nonatomic) NSString resolutionType;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)appsList;
- (void)setAppsList:;
- (id)needsConfirmation;
- (void)setNeedsConfirmation:;
- (id)resolutionType;
- (void)setResolutionType:;
+ (id)resolveAppForIntentResponse;
+ (id)resolveAppForIntentResponseWithDictionary:context:;
@end
