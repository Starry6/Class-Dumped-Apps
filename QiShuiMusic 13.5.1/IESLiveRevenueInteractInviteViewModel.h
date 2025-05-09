@interface IESLiveRevenueInteractInviteViewModel : NSObject
@property (nonatomic) IESLiveRevenueInteractApi revenueInteractApi;
@property (nonatomic) <IESLiveInteractiveExtendUserService> userService;
@property (nonatomic) RivalsRecommendResponse_SearchBar searchBarInfoModel;
@property (nonatomic) BOOL enableMultiAutoMatch;
@property (nonatomic) RivalsRecommendResponse_AutoMatchInfo autoMatchInfo;
@property (nonatomic) NSArray sectionList;
@property (nonatomic) NSDictionary itemMap;
@property (nonatomic) NSMutableArray invitedUserByMyself;
@property (nonatomic) Q entranceSource;
@property (nonatomic) IESLiveFixedFontTextSizeCache nameSizeCache;
@property (nonatomic) IESLiveFixedFontTextSizeCache userTagSizeCache;
@property (nonatomic) NSString imprId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPKing;
- (id)itemMap;
- (void)setUserService:;
- (void)showSearchPanel;
- (id)autoMatchInfo;
- (void)buildInviteList:;
- (void)cancelInviteWithRoom:inviteType:completion:;
- (BOOL)enableMultiAutoMatch;
- (unsigned long long)entranceSource;
- (void)fetchRecommendRivalsWithConnectingSource:completion:;
- (id)getShellPKName;
- (id)imprId;
- (void)initInvitedUsersByMyself;
- (id)initWithUserService:diContext:;
- (void)inviteWithRoom:signExtra:inviteType:inviteSource:isRecommend:listNum:completion:;
- (void)inviteWithRoom:signExtra:inviteType:inviteSource:isRecommend:listNum:isNeedImprId:completion:;
- (void)inviteWithRoom:signExtra:inviteType:source:inviteSource:extraParams:completion:;
- (id)invitedUserByMyself;
- (BOOL)isBreakthroughing;
- (BOOL)isGaming;
- (BOOL)isInviteeLimited;
- (BOOL)isInvitingOthers;
- (BOOL)isMultiInviteeLimited;
- (BOOL)isShellPKing;
- (BOOL)isVoting;
- (void)logInfoWithEvent:extra:pkCategory:;
- (void)monitorWithResponse:error:apiRequestTime:path:;
- (void)multiInviteWithItem:;
- (void)multiLinkerUserService:didInteractiveListUpdated:;
- (id)nameSizeCache;
- (id)revenueInteractApi;
- (id)searchBarInfoModel;
- (void)setAutoMatchInfo:;
- (void)setEnableMultiAutoMatch:;
- (void)setEntranceSource:;
- (void)setImprId:;
- (void)setInvitedUserByMyself:;
- (void)setItemMap:;
- (void)setNameSizeCache:;
- (void)setRevenueInteractApi:;
- (void)setSearchBarInfoModel:;
- (void)setUserTagSizeCache:;
- (id)setupInviteItem:requestID:isRecommend:listNum:;
- (void)setupItemButtonState:userID:;
- (void)trackWithEvent:extraParams:;
- (void)trackWithEvent:extraParams:isNeedImprId:;
- (id)userService;
- (id)userTagSizeCache;
- (void).cxx_destruct;
- (id)sectionList;
- (void)setSectionList:;
@end
