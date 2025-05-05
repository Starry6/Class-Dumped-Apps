@interface SASendInstrumentation : SABaseCommand
@property (nonatomic) NSNumber eventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic) NSString eventTransmittedTimestampRefId;
@property (nonatomic) NSArray instrumentationBatch;
@property (nonatomic) NSString payloadVersion;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)payloadVersion;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setPayloadVersion:;
- (id)eventTransmittedRelativeToBootTimeTimestampNs;
- (void)setEventTransmittedRelativeToBootTimeTimestampNs:;
- (id)eventTransmittedTimestampRefId;
- (void)setEventTransmittedTimestampRefId:;
- (id)instrumentationBatch;
- (void)setInstrumentationBatch:;
+ (id)sendInstrumentation;
+ (id)sendInstrumentationWithDictionary:context:;
@end
