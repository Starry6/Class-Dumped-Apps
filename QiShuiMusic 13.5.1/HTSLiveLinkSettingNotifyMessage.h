@interface HTSLiveLinkSettingNotifyMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray settingsArray;
@property (nonatomic) Q settingsArray_Count;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLivePaiedOrTimeLimitChangeContent paiedOrTimeLimitChangeContent;
+ (id)descriptor;
@end
