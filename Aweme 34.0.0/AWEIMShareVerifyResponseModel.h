@interface AWEIMShareVerifyResponseModel : MTLModel
@property (nonatomic) NSString conversationID;
@property (nonatomic) q conversationShortID;
@property (nonatomic) NSString groupAvatar;
@property (nonatomic) NSString secondGroupAvatar;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSInteger memberCount;
@property (nonatomic) q inviterID;
@property (nonatomic) NSString inviterSecID;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSInteger shareScene;
@property (nonatomic) NSInteger shareType;
@property (nonatomic) NSArray toFollowUserArray;
@property (nonatomic) AWEIMGroupInviteCardGroupOwnerInfo groupOwnerInfo;
@property (nonatomic) NSString groupDesc;
@property (nonatomic) NSArray entryLimits;
@property (nonatomic) NSArray groupTags;
@property (nonatomic) NSString groupType;
@property (nonatomic) NSString groupCreateType;
@property (nonatomic) NSString joinText;
@property (nonatomic) NSArray userInfoList;
@property (nonatomic) AWEIMGroupJoinPanelPopupInfo popupViewData;
@property (nonatomic) NSDictionary joinExt;
@property (nonatomic) NSString groupTypeV2;
@property (nonatomic) NSString groupCategory;
@property (nonatomic) BOOL isNeedCropIcon;
@property (nonatomic) NSString groupAuditQuestion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupCreateType;
- (void)setGroupCreateType:;
- (long long)conversationShortID;
- (void)setConversationShortID:;
- (void)setMemberCount:;
- (int)shareScene;
- (void)setShareScene:;
- (id)groupDesc;
- (void)setGroupDesc:;
- (id)secondGroupAvatar;
- (id)groupAvatar;
- (id)userInfoList;
- (void)setGroupAvatar:;
- (id)groupTags;
- (id)joinText;
- (void)setGroupTags:;
- (id)entryLimits;
- (id)popupViewData;
- (id)groupTypeV2;
- (id)joinExt;
- (BOOL)isNeedCropIcon;
- (id)groupOwnerInfo;
- (void)setEntryLimits:;
- (id)groupAuditQuestion;
- (void)setJoinText:;
- (id)toFollowUserArray;
- (void)setToFollowUserArray:;
- (void)setSecondGroupAvatar:;
- (id)inviterSecID;
- (void)setInviterSecID:;
- (void)setGroupOwnerInfo:;
- (void)setUserInfoList:;
- (void)setPopupViewData:;
- (void)setJoinExt:;
- (void)setGroupTypeV2:;
- (void)setIsNeedCropIcon:;
- (void)setGroupAuditQuestion:;
- (void)setGroupName:;
- (void)setGroupType:;
- (id)groupType;
- (int)memberCount;
- (id)conversationID;
- (id)groupName;
- (void).cxx_destruct;
- (void)setConversationID:;
- (void)setTicket:;
- (id)ticket;
- (long long)inviterID;
- (void)setInviterID:;
- (void)setShareType:;
- (int)shareType;
- (id)groupCategory;
- (void)setGroupCategory:;
+ (id)toFollowUserArrayJSONTransformer;
+ (id)userInfoListJSONTransformer;
+ (id)popupViewDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
