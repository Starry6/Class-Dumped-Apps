@interface HTSLiveHighlightDataAppointment : IESLivePBBaseMessage
@property (nonatomic) q appointmentTimestamp;
@property (nonatomic) BOOL demotion;
@property (nonatomic) NSString anchorOpenId;
@property (nonatomic) q currentNumber;
@property (nonatomic) NSString text;
@property (nonatomic) q appointmentId;
@property (nonatomic) NSInteger scheduledTime;
@property (nonatomic) NSInteger scheduledDate;
@property (nonatomic) GPBInt32Array scheduledWeekdaysArray;
@property (nonatomic) Q scheduledWeekdaysArray_Count;
+ (id)descriptor;
@end
