@interface AWEDetailPropTracker : NSObject
@property (nonatomic) AWEDetailPropViewModel viewModel;
@property (nonatomic) AWEDetailCommerceSponsorProfileModel trackedSponsorModel;
@property (nonatomic) AWEDetailUserProfileModel trackedUserModel;
@property (nonatomic) @ trackedLinkModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEnterPersonalDetailWithModel:;
- (void)trackClickAuthorViewWithModel:;
- (void)trackShowADUserHeadWithModel:;
- (void)trackClickADUserHeadWithModel:;
- (void)trackShowVerifiedUserCellWithModel:;
- (void)trackDidShowLoraInfoWithCellWithModel:;
- (void)trackShowLoraRoleManagePage;
- (void)trackShowLinkWithModel:;
- (void)trackClickLinkWithModel:;
- (void)trackClickChallangeEntranceViewWithModel:;
- (void)trackShowFriendVidelWithModel:index:;
- (void)trackFeedEnterWithModel:;
- (void)trackDetailPageClientShowWithModel:;
- (void)trackCollect:;
- (void)trackDetailPageExitWithMask;
- (void)trackDetailPagePullUp;
- (void)trackDetailPagePullDown;
- (void)trackLeftCustomButtonClickWithLabel:;
- (void)trackFlowAuthEntryTokenWithPositionCertID:bindEntity:;
- (id)initWithStateContext:;
- (void)welfareView:trackWelfareProjectClick:;
- (void)welfareView:trackWelfareProjectMatchingShow:;
- (void)trackCommercePropClick;
- (void)trackLoginNotifyWithLabel:;
- (void)trackClickFavouriteHintWithModel:;
- (void)trackEnterPersonalFavourite;
- (void)trackFollowDesigner;
- (void)trackPropSelect;
- (void)trackPropDetailShootButtonShowPerformance;
- (void)trackLeftCustomButtonShowWithLabel:;
- (void)trackClickMoreButton;
- (id)trackedSponsorModel;
- (void)setTrackedSponsorModel:;
- (id)trackedUserModel;
- (void)setTrackedUserModel:;
- (id)trackedLinkModel;
- (void)setTrackedLinkModel:;
- (id)p_getAIGCType;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
