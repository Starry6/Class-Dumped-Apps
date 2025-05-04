@interface AWEUserDetailHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)showPrivateAccountInfoView:;
+ (BOOL)isPrivateAccount:;
+ (long long)emptyRecommendType:;
+ (BOOL)isCompanyProfileForRecommendUserWithUser:;
+ (id)relationDescriptionTextWithUser:;
+ (long long)relationDescriptionIconTypeWithUser:;
+ (BOOL)enableFullScreenRecommendVC:;
+ (BOOL)enableEmptyRecommendVC:;
+ (BOOL)isVsOfficialAccount:;
+ (id)createProfileEditTextViewControllerWithEditType:user:;
+ (BOOL)shouldShowChoiceCardWithUser:;
+ (BOOL)needShowRecommendButton:user:;
+ (BOOL)currentValueForUserHomeShowRecommendView;
+ (BOOL)isMemorialAccount:;
+ (id)relationDescriptionAttachmentIconWithUser:color:;
+ (id)relationDescriptionTextSet;
+ (void)updateShowRecommendViewValue:;
+ (id)tabInfoListFromServer:;
+ (BOOL)shouldShowRelationDescriptionLabel:isFriendText:;
+ (BOOL)enableEmptyPostRecommendVC:;
+ (BOOL)needShowNavMoreButton:user:;
+ (BOOL)showRecommendView:;
@end
