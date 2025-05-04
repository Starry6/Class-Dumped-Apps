@interface AWEIMRecommendGroupApplyVCTracker : NSObject
+ (void)trackRecommendGroupPopupWithEnvetType:clickType:;
+ (void)trackApplyJoinSchoolGroupWithCid:groupType:;
+ (void)trackConfirmJoinRecommendGroupWithCid:currentCid:fromUid:memberCount:groupType:;
@end
