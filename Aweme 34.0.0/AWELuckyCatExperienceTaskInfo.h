@interface AWELuckyCatExperienceTaskInfo : MTLModel
@property (nonatomic) q currentLevel;
@property (nonatomic) q upgradeType;
@property (nonatomic) q upgradeFrom;
@property (nonatomic) NSString upgradePopupSchema;
@property (nonatomic) NSString feData;
@property (nonatomic) NSString bubbleText;
@property (nonatomic) double bubbleInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feData;
- (void)setFeData:;
- (long long)upgradeFrom;
- (void)setUpgradeFrom:;
- (id)upgradePopupSchema;
- (void)setUpgradePopupSchema:;
- (double)bubbleInterval;
- (void)setBubbleInterval:;
- (long long)currentLevel;
- (void).cxx_destruct;
- (void)setCurrentLevel:;
- (id)bubbleText;
- (void)setBubbleText:;
- (void)setUpgradeType:;
- (long long)upgradeType;
+ (id)JSONKeyPathsByPropertyKey;
@end
