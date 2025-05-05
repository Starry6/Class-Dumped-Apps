@interface UpdateSettingsResponse : IESLivePBBaseMessage
@property (nonatomic) UpdateSettingsResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
