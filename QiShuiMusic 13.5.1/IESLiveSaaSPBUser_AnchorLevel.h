@interface IESLiveSaaSPBUser_AnchorLevel : GPBMessage
@property (nonatomic) q level;
@property (nonatomic) q experience;
@property (nonatomic) q lowestExperienceThisLevel;
@property (nonatomic) q highestExperienceThisLevel;
@property (nonatomic) q taskStartExperience;
@property (nonatomic) q taskStartTime;
@property (nonatomic) q taskDecreaseExperience;
@property (nonatomic) q taskTargetExperience;
@property (nonatomic) q taskEndTime;
@property (nonatomic) IESLiveSaaSPBImage profileDialogBg;
@property (nonatomic) BOOL hasProfileDialogBg;
@property (nonatomic) IESLiveSaaSPBImage profileDialogBgBack;
@property (nonatomic) BOOL hasProfileDialogBgBack;
@property (nonatomic) IESLiveSaaSPBImage stageLevel;
@property (nonatomic) BOOL hasStageLevel;
@property (nonatomic) IESLiveSaaSPBImage smallIcon;
@property (nonatomic) BOOL hasSmallIcon;
+ (id)descriptor;
@end
