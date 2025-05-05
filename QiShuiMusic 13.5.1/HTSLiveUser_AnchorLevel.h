@interface HTSLiveUser_AnchorLevel : IESLivePBBaseMessage
@property (nonatomic) q level;
@property (nonatomic) q experience;
@property (nonatomic) q lowestExperienceThisLevel;
@property (nonatomic) q highestExperienceThisLevel;
@property (nonatomic) q taskStartExperience;
@property (nonatomic) q taskStartTime;
@property (nonatomic) q taskDecreaseExperience;
@property (nonatomic) q taskTargetExperience;
@property (nonatomic) q taskEndTime;
@property (nonatomic) HTSLiveImage profileDialogBg;
@property (nonatomic) BOOL hasProfileDialogBg;
@property (nonatomic) HTSLiveImage profileDialogBgBack;
@property (nonatomic) BOOL hasProfileDialogBgBack;
@property (nonatomic) HTSLiveImage stageLevel;
@property (nonatomic) BOOL hasStageLevel;
@property (nonatomic) HTSLiveImage smallIcon;
@property (nonatomic) BOOL hasSmallIcon;
+ (id)descriptor;
@end
