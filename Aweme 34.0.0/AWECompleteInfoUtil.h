@interface AWECompleteInfoUtil : NSObject
@property (nonatomic) BOOL canShowCompleteInfoBubble;
@property (nonatomic) BOOL isAvatarCompleted;
@property (nonatomic) NSNumber profileCompletionRate;
@property (nonatomic) NSString titleForProfileCompletionBubble;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCanShowCompleteInfoBubble:;
- (BOOL)canShowCompleteInfoBubble;
- (void)setTitleForProfileCompletionBubble:;
- (void)setIsAvatarCompleted:;
- (void)setProfileCompletionRate:;
- (BOOL)isAvatarCompleted;
- (id)profileCompletionRate;
- (id)titleForProfileCompletionBubble;
- (void).cxx_destruct;
+ (float)getCompletionPercentWithUser:avatarImage:avatarUrl:;
+ (void)setUserCompleteProfileDictWithShownKey:expireDate:;
+ (BOOL)avatarCompletedWithImage:avatarUrl:;
+ (BOOL)shouldShowInUserProfileWithAvatarImage:avatarUrl:;
+ (void)markUserProfileEditNoticeViewAsShowed;
+ (void)updateCompleteProfileInfoTipStringWithAvatarImage:avatarUrl:;
+ (BOOL)completedInfoWithAvatarImage:avatarUrl:;
+ (id)sharedInstance;
@end
