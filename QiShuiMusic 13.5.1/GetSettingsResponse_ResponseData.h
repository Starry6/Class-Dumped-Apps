@interface GetSettingsResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) IESLiveAnchorLinkmicUserSettings settings;
@property (nonatomic) BOOL hasSettings;
+ (id)descriptor;
@end
