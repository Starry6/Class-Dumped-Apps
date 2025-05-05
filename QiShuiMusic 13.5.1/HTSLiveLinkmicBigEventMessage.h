@interface HTSLiveLinkmicBigEventMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveInitLinkmicContent initLinkmicContent;
@property (nonatomic) HTSLiveSwitchSceneContent switchSceneContent;
@property (nonatomic) HTSLiveSwitchEarphoneMonitorContent switchEarphoneMonitorContent;
@property (nonatomic) HTSLiveSwitchKtvModeContent switchKtvModeContent;
@property (nonatomic) HTSLiveSwitchLyricStatusContent switchLyricStatusContent;
@property (nonatomic) HTSLiveSwitchFullSongStatusContent switchFullSongStatusContent;
@property (nonatomic) HTSLiveSwitchTuningEffectContent switchTuningEffectContent;
+ (id)descriptor;
@end
