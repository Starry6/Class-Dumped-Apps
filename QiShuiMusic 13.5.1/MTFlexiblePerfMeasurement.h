@interface MTFlexiblePerfMeasurement : MTPerfBaseMeasurement
@property (nonatomic) NSString eventType;
@property (nonatomic) NSArray eventData;
@property (nonatomic) NSArray additionalFields;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString eventType;
- (id)eventType;
- (void)setEventType:;
- (void)setXpSamplingForced:;
- (void)mark:;
- (void).cxx_destruct;
- (id)initWithMeasurementTransformer:eventType:eventData:;
- (void)mark:time:;
- (void)setXpSamplingPercentage:;
- (void)mark:date:;
@end
