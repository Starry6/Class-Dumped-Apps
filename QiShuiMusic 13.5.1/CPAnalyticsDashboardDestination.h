@interface CPAnalyticsDashboardDestination : NSObject
@property (nonatomic) CPAnalytics cpAnalyticsInstance;
@property (nonatomic) NSArray allStandardProperties;
@property (nonatomic) NSArray allMediaProperties;
@property (nonatomic) NSArray allErrorProperties;
@property (nonatomic) BOOL disabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithConfig:;
- (id)init;
- (id)initWithConfig:cpAnalyticsInstance:;
- (void)processEvent:;
- (id)cpAnalyticsInstance;
- (void).cxx_destruct;
- (id)allStandardProperties;
- (id)allMediaProperties;
- (id)allErrorProperties;
- (BOOL)isMediaEvent:;
- (void)sendCoreAnalyticsEventWithStandardPropertiesForEventWithName:fromSourceEvent:payload:;
- (id)buildCoreAnalyticsEventPayloadWithProperties:fromSourceEvent:intoTargetEventPayload:;
- (void)reportMalformedEvent:malformationDescriptionWithFormat:;
@end
