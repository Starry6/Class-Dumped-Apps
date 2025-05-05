@interface IESLiveSaaSAnchorLevelModel : BDDynamicMTLModel
@property (nonatomic) NSNumber type;
@property (nonatomic) NSNumber level;
@property (nonatomic) NSNumber experience;
@property (nonatomic) NSNumber lowestExperienceThisLevel;
@property (nonatomic) NSNumber highestExperienceThisLevel;
@property (nonatomic) NSNumber taskStartExperience;
@property (nonatomic) NSNumber taskStartTime;
@property (nonatomic) NSNumber taskDecreaseExperience;
@property (nonatomic) NSNumber taskTargetExperience;
@property (nonatomic) NSNumber taskEndTime;
@property (nonatomic) IESLiveSaaSImage profileDialogBg;
@property (nonatomic) IESLiveSaaSImage profileDialogBgBack;
@property (nonatomic) IESLiveSaaSImage stageLevel;
@property (nonatomic) IESLiveSaaSImage smallIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)profileDialogBgBackJSONTransformer;
+ (id)profileDialogBgJSONTransformer;
+ (id)smallIconJSONTransformer;
+ (id)stageLevelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
