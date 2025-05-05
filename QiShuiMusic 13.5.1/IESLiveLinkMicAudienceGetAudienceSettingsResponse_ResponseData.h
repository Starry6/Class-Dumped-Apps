@interface IESLiveLinkMicAudienceGetAudienceSettingsResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray settingsArray;
@property (nonatomic) Q settingsArray_Count;
@property (nonatomic) BOOL isForbiddenShakeRoom;
+ (id)descriptor;
@end
