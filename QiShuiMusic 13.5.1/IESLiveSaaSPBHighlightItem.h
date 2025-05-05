@interface IESLiveSaaSPBHighlightItem : GPBMessage
@property (nonatomic) q itemId;
@property (nonatomic) q version;
@property (nonatomic) q endTime;
@property (nonatomic) IESLiveSaaSPBPosition position;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) NSInteger dataType;
@property (nonatomic) IESLiveSaaSPBHighlightDataAppointment appointmentData;
@property (nonatomic) BOOL hasAppointmentData;
+ (id)descriptor;
@end
