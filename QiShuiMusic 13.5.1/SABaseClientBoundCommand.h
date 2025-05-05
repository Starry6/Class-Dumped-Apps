@interface SABaseClientBoundCommand : SABaseCommand
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray callbacks;
@property (nonatomic) NSString metricsContext;
@property (nonatomic) NSNumber usefulnessScore;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)appId;
- (void)setCallbacks:;
- (id)callbacks;
- (void)setAppId:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)metricsContext;
- (void)setMetricsContext:;
- (BOOL)mutatingCommand;
- (void)setUsefulnessScore:;
- (id)usefulnessScore;
+ (id)baseClientBoundCommand;
+ (id)baseClientBoundCommandWithDictionary:context:;
@end
