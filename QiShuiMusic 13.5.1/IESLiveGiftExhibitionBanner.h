@interface IESLiveGiftExhibitionBanner : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger lightedCount;
@property (nonatomic) NSInteger totalCount;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) HTSLiveImage achievedIcon;
@property (nonatomic) BOOL hasAchievedIcon;
@property (nonatomic) NSMutableArray achievedGiftsArray;
@property (nonatomic) Q achievedGiftsArray_Count;
@property (nonatomic) HTSLiveImage lightSweepAnimation;
@property (nonatomic) BOOL hasLightSweepAnimation;
@property (nonatomic) IESLiveGiftExhibitionBanner_UIConfig uiConfig;
@property (nonatomic) BOOL hasUiConfig;
@property (nonatomic) NSInteger gradeLevel;
@property (nonatomic) HTSLiveImage levelUpAnimation;
@property (nonatomic) BOOL hasLevelUpAnimation;
+ (id)descriptor;
@end
