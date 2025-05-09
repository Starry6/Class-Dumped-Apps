@interface AWEProfileHeaderSocialStatisticSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) AWEProfileContext profileContext;
@property (nonatomic) AWESocialRelationObserver friendCountObserver;
@property (nonatomic) BOOL usingLocalFriendCount;
@property (nonatomic) BOOL followStatusChange;
@property (nonatomic) NSNumber fansCount;
@property (nonatomic) NSNumber followingCount;
@property (nonatomic) NSNumber friendsCount;
@property (nonatomic) double footerHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFansCount:;
- (void)setFriendsCount:;
- (BOOL)isPrivateAccount;
- (id)followingCount;
- (id)fansCount;
- (id)friendCountObserver;
- (void)setFriendCountObserver:;
- (void)setFollowingCount:;
- (void)configWithContext:;
- (id)profileContext;
- (BOOL)showPrivateAccountInfoView;
- (void)guestDidFinishFollowUser:isUnfollow:;
- (void)guestDidDiggAweme:isUndigg:;
- (id)padService;
- (void)setProfileContext:;
- (double)topPaddingWithUpperSection:;
- (double)bottomPaddingWithLowerSection:;
- (double)sectionWidth;
- (id)socialStatisticFormatWithType:enterFrom:;
- (void)p_followStatusDidChange:;
- (void)p_updateStatisticCount:;
- (void)setFollowStatusChange:;
- (BOOL)usingLocalFriendCount;
- (void)setUsingLocalFriendCount:;
- (void)trackEnterMutualListWithEnterMethod:enterFrom:;
- (void)trackEnterMateListWithEnterMethod:enterFrom:;
- (void)p_addMateOrMutualFollowEnterance;
- (void)p_addMateOrFriendObserver;
- (void)p_updateFriendCountV2:;
- (void)p_updateFriendCount:;
- (BOOL)followStatusChange;
- (id)init;
- (void)dealloc;
- (long long)sectionType;
- (id)friendsCount;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)sectionSize;
- (double)footerHeight;
- (double)sectionHeight;
+ (BOOL)canShowFriendsLabel:;
+ (double)getSocialStatisticHeightFontWithMaxWidth:statisticArray:resultLabelFontSize:resultBtnFontSize:resultGap:;
@end
