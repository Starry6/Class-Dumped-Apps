@interface SABaseAceObject : AceObject
@property (nonatomic) NSString metricsContext;
@property (nonatomic) NSString aceId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)metricsContext;
- (void)setMetricsContext:;
+ (id)baseAceObject;
+ (id)baseAceObjectWithDictionary:context:;
@end
