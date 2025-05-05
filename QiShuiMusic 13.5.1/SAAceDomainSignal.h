@interface SAAceDomainSignal : SABaseClientBoundCommand
@property (nonatomic) NSArray appIdHints;
@property (nonatomic) NSString domain;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)domain;
- (void)setDomain:;
- (BOOL)mutatingCommand;
- (id)appIdHints;
- (void)setAppIdHints:;
+ (id)aceDomainSignal;
+ (id)aceDomainSignalWithDictionary:context:;
@end
