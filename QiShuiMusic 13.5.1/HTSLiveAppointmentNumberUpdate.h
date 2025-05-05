@interface HTSLiveAppointmentNumberUpdate : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveAppointmentNumberUpdate_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
