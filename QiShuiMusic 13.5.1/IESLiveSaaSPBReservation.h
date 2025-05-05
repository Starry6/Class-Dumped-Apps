@interface IESLiveSaaSPBReservation : GPBMessage
@property (nonatomic) q appointmentId;
@property (nonatomic) GPBInt64Array btnRectArray;
@property (nonatomic) Q btnRectArray_Count;
@property (nonatomic) NSString btnColor;
@property (nonatomic) BOOL isReserved;
@property (nonatomic) q anchorOpenId;
@property (nonatomic) q anchorUnionId;
@property (nonatomic) q roomId;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
+ (id)descriptor;
@end
