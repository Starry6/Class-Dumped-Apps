@interface HTSLiveScreenChatSettingGetResponse_Data : IESLivePBBaseMessage
@property (nonatomic) HTSLiveScreenChatSetting setting;
@property (nonatomic) BOOL hasSetting;
+ (id)descriptor;
@end
