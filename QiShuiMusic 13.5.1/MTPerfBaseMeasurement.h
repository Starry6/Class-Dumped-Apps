@interface MTPerfBaseMeasurement : NSObject
@property (nonatomic) NSArray eventData;
@property (nonatomic) NSArray additionalFields;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableDictionary timestamps;
@property (nonatomic) NSMutableDictionary measurementSpecificData;
@property (nonatomic) <MTPerfBaseMeasurementTransformation> measurementTransformer;
- (id)additionalFields;
- (void)addFields:;
- (id)metricsData;
- (id)record;
- (void).cxx_destruct;
- (id)eventData;
- (id)timestamps;
- (void)setTimestamps:;
- (void)addFieldsWithDictionary:;
- (void)addFieldsWithPromise:;
- (id)initWithMeasurementTransformer:eventData:;
- (id)getAdditionalData;
- (id)measurementSpecificData;
- (void)setMeasurementSpecificData:;
- (id)measurementTransformer;
- (void)setMeasurementTransformer:;
@end
