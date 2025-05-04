@interface AWEIMUserRecommendManager : NSObject
+ (void)closeUserRecommend;
+ (BOOL)shouldShowUserRecommendWithChatCount:;
+ (id)userRecommendKey;
+ (BOOL)shouldShowUserRecommend:;
+ (void)clearUserRecommendCloseFlag;
@end
