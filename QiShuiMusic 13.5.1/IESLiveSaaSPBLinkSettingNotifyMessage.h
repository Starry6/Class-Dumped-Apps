@interface IESLiveSaaSPBLinkSettingNotifyMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray settingsArray;
@property (nonatomic) Q settingsArray_Count;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveSaaSPBPaiedOrTimeLimitChangeContent paiedOrTimeLimitChangeContent;
+ (id)descriptor;
@end
