@interface AWEEnterpriseCenterUserProfileEntryController : NSObject
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) AWEEnterpriseCenterUserProfileEntryCard cardView;
@property (nonatomic) BOOL isTrackedShown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowCard;
- (void)cardWillAppear;
- (void)cardWillDisappear;
- (id)cardModel;
- (void)setCardModel:;
- (double)widthOfCard;
- (BOOL)isTrackedShown;
- (void)setIsTrackedShown:;
- (void)entryCardDidTapped;
- (void)__trackEnterpriseProfileButtonWithEventName:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)cardView;
- (void)setCardView:;
+ (void)handleProfileExtensionAreaActionWithType:userModel:schema:;
+ (id)cardControllerWithUserModel:cardModel:cardIndex:extraInfo:reloadCardListBlock:;
+ (void)handleProfileExtensionAreaActionWithType:userModel:schema:cardModel:;
@end
