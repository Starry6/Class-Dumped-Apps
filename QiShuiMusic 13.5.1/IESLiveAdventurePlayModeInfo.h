@interface IESLiveAdventurePlayModeInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray linkedUserListArray;
@property (nonatomic) Q linkedUserListArray_Count;
@property (nonatomic) NSInteger playModeStatus;
@property (nonatomic) IESLiveAdventureSettingContent settingContent;
@property (nonatomic) BOOL hasSettingContent;
@property (nonatomic) q playId;
@property (nonatomic) HTSLiveImage startAnimation;
@property (nonatomic) BOOL hasStartAnimation;
@property (nonatomic) HTSLiveImage finishAnimation;
@property (nonatomic) BOOL hasFinishAnimation;
@property (nonatomic) NSString playIdStr;
+ (id)descriptor;
@end
