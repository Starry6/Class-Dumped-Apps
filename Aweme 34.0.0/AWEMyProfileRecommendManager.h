@interface AWEMyProfileRecommendManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)lastShowDate;
+ (void)notifyLeaveMyProfile;
+ (BOOL)canShowUserRecommendAtMyProfile;
+ (void)notifyShowUserRecommendAtMyProfile;
+ (void)notifyEnterMyProfile;
+ (long long)clickHideCount;
+ (long long)enterMyProfileCountToday;
+ (long long)showCountToday;
+ (BOOL)p_isInFrequency;
+ (id)p_storageKeyWithID:;
+ (long long)totalShowDays;
+ (id)enterMyProfileDate;
+ (id)lastInteractDate;
+ (long long)noInteractDays;
+ (BOOL)p_isFirstDate:InTheSameXDay:WithSecondDate:;
+ (id)lastAddCountDate;
+ (BOOL)hasTrackedExitCard;
+ (void)p_trackExitCard;
+ (id)clickHideDate;
+ (void)notifyInteractUserRecommendAtMyProfile;
+ (void)notifyHideUserRecommendAtMyProfile;
+ (long long)currentUserMaxFriendCount;
@end
