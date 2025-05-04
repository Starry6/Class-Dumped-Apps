@interface AWELuckyCatNewExperienceModel : MTLModel
@property (nonatomic) AWELuckyCatNewExperienceFeedGuideModel feedGuideModel;
@property (nonatomic) AWELuckyCatNewExperienceTaskExitModel taskExitModel;
@property (nonatomic) Q currentLevel;
@property (nonatomic) q awardLimitTime;
@property (nonatomic) AWELuckyCatNewExperienceTaskResourceInfo taskResourceInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needExperienceWidget;
- (id)feedGuideModel;
- (void)setFeedGuideModel:;
- (id)taskExitModel;
- (void)setTaskExitModel:;
- (long long)awardLimitTime;
- (void)setAwardLimitTime:;
- (id)taskResourceInfo;
- (void)setTaskResourceInfo:;
- (unsigned long long)currentLevel;
- (void).cxx_destruct;
- (void)setCurrentLevel:;
+ (id)feedGuideModelJSONTransformer;
+ (id)taskExitModelJSONTransformer;
+ (id)taskResourceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
