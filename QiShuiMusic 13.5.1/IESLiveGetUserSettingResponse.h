@interface IESLiveGetUserSettingResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveGetUserSettingResponse_UserSetting data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
