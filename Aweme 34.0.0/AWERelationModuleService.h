@interface AWERelationModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createFamiliarSearchFriendHolderViewControllerWithEnterFrom:enterType:;
- (id)friendsListDataControllerWithCount:;
- (id)friendsRelationListDataController;
- (id)familiarSearchDataController;
- (id)contactCardView:delegate:needGradient:isConstColor:;
- (id)contactCardViewWithFrame:isConstColor:shareCellsBottom:maxNumOfShareChannels:;
- (long long)localFriendsListNumber;
- (long long)newFriendsListNumber;
@end
