@interface BWCinematicFramingSessionAnalyticsPayload : NSObject
@property (nonatomic) I cinematicFramingMaxPeopleDetected;
@property (nonatomic) NSString cinematicFramingROIHeatMap;
@property (nonatomic) NSString clientApplicationID;
@property (nonatomic) I cinematicFramingControlMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)cinematicFramingControlMode;
- (void)setCinematicFramingControlMode:;
- (id)init;
- (void)dealloc;
- (id)clientApplicationID;
- (void)setClientApplicationID:;
- (id)eventName;
- (void)reset;
- (id)eventDictionary;
- (unsigned int)cinematicFramingMaxPeopleDetected;
- (void)setCinematicFramingMaxPeopleDetected:;
- (id)cinematicFramingROIHeatMap;
- (void)setCinematicFramingROIHeatMap:;
@end
