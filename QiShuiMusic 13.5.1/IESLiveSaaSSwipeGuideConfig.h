@interface IESLiveSaaSSwipeGuideConfig : BDDynamicMTLModel
@property (nonatomic) q group;
@property (nonatomic) q entranceGuideShowType;
@property (nonatomic) double entranceGuideDuration;
@property (nonatomic) double slideGuideDuration;
@property (nonatomic) double slideGuideNtime;
@property (nonatomic) double slideGuideYtime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isShowAlertGuide;
- (BOOL)isShowBubbleEntranceGuide;
- (BOOL)isShowNewBubbleEntranceGuide;
- (BOOL)isShowNewSwipeGuide;
- (BOOL)isShowSwipeGuide;
+ (id)JSONKeyPathsByPropertyKey;
@end
