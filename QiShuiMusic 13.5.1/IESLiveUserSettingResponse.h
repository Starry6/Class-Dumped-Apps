@interface IESLiveUserSettingResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveUserSettingResponse_UserSetting data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
