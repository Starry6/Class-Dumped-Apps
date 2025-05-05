@interface IESLiveRankVisiableSetting : NSObject
@property (nonatomic) NSDictionary liveRankConfigDic;
- (id)liveRankConfigDic;
- (void)setLiveRankConfigDic:;
- (id)init;
- (void).cxx_destruct;
+ (long long)anchorRankStrategy:;
+ (unsigned long long)ecommerceRankVisibleType;
+ (long long)entranceDisplayThreshold;
+ (double)epilogueStageCountdownTimeInterval;
+ (double)epilogueStageTime;
+ (long long)highlightHeaderTime;
+ (id)hourEntranceDefaultText;
+ (BOOL)isEcommercePopupEnabled;
+ (BOOL)isEcommerceRankVisible;
+ (BOOL)isNewStyleEnabled:;
+ (BOOL)isRegionRankVisible;
+ (BOOL)isRewardSpecialEffectsEnabled;
+ (double)loopDelayDuration;
+ (id)rankListBottomButtonText;
+ (id)rewardBubbleText;
+ (id)rewardDividerText;
+ (double)sameTypeDelayDuration;
+ (id)singleton;
@end
