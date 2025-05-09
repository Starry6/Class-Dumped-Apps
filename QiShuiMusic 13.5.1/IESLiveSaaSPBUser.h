@interface IESLiveSaaSPBUser : GPBMessage
@property (nonatomic) NSString userOpenId;
@property (nonatomic) NSString userUnionId;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSInteger gender;
@property (nonatomic) NSString signature;
@property (nonatomic) IESLiveSaaSPBImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) IESLiveSaaSPBImage avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (nonatomic) IESLiveSaaSPBImage avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (nonatomic) NSString city;
@property (nonatomic) NSInteger secret;
@property (nonatomic) IESLiveSaaSPBUser_FollowInfo followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (nonatomic) IESLiveSaaSPBUser_PayGrade payGrade;
@property (nonatomic) BOOL hasPayGrade;
@property (nonatomic) IESLiveSaaSPBUser_FansClub fansClub;
@property (nonatomic) BOOL hasFansClub;
@property (nonatomic) IESLiveSaaSPBUser_UserAttr userAttr;
@property (nonatomic) BOOL hasUserAttr;
@property (nonatomic) IESLiveSaaSPBUser_OwnRoom ownRoom;
@property (nonatomic) BOOL hasOwnRoom;
@property (nonatomic) IESLiveSaaSPBAuthentication authentication;
@property (nonatomic) BOOL hasAuthentication;
@property (nonatomic) NSMutableArray badgeImageListArray;
@property (nonatomic) Q badgeImageListArray_Count;
@property (nonatomic) IESLiveSaaSPBUser_PoiInfo poiInfo;
@property (nonatomic) BOOL hasPoiInfo;
@property (nonatomic) NSInteger authorizationInfo;
@property (nonatomic) NSInteger adversaryAuthorizationInfo;
@property (nonatomic) NSInteger adversaryUserStatus;
@property (nonatomic) BOOL withCommercePermission;
@property (nonatomic) GPBInt64Array commerceWebcastConfigIdsArray;
@property (nonatomic) Q commerceWebcastConfigIdsArray_Count;
@property (nonatomic) IESLiveSaaSPBHostInfo hostInfo;
@property (nonatomic) BOOL hasHostInfo;
@property (nonatomic) IESLiveSaaSPBUser_Border border;
@property (nonatomic) BOOL hasBorder;
@property (nonatomic) NSString webRid;
@property (nonatomic) IESLiveSaaSPBImage medal;
@property (nonatomic) BOOL hasMedal;
@property (nonatomic) NSString displayId;
@property (nonatomic) NSString secUid;
@property (nonatomic) IESLiveSaaSPBUser_XiguaParams xiguaInfo;
@property (nonatomic) BOOL hasXiguaInfo;
@property (nonatomic) NSMutableArray badgeImageListV2Array;
@property (nonatomic) Q badgeImageListV2Array_Count;
@property (nonatomic) IESLiveSaaSPBUser_AuthenticationInfo authenticationInfo;
@property (nonatomic) BOOL hasAuthenticationInfo;
@property (nonatomic) IESLiveSaaSPBUserVIPInfo userVipInfo;
@property (nonatomic) BOOL hasUserVipInfo;
@property (nonatomic) IESLiveSaaSPBIndustryCertification industryCertification;
@property (nonatomic) BOOL hasIndustryCertification;
@property (nonatomic) NSString locationCity;
@property (nonatomic) IESLiveSaaSPBUser_FansGroupInfo fansGroupInfo;
@property (nonatomic) BOOL hasFansGroupInfo;
@property (nonatomic) NSString remarkName;
@property (nonatomic) NSInteger mysteryMan;
@property (nonatomic) NSString desensitizedNickname;
@property (nonatomic) IESLiveSaaSPBUser_JAccreditInfo jAccreditInfo;
@property (nonatomic) BOOL hasJAccreditInfo;
@property (nonatomic) IESLiveSaaSPBUser_Subscribe subscribe;
@property (nonatomic) BOOL hasSubscribe;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSString webcastUid;
@property (nonatomic) q shortId;
@property (nonatomic) NSInteger consumeDiamondLevel;
@property (nonatomic) IESLiveSaaSPBUser_ProfileStyleParams profileStyleParams;
@property (nonatomic) BOOL hasProfileStyleParams;
@property (nonatomic) IESLiveSaaSPBUser_UserDressInfo userDressInfo;
@property (nonatomic) BOOL hasUserDressInfo;
@property (nonatomic) q birthday;
@property (nonatomic) NSString telephone;
@property (nonatomic) BOOL verified;
@property (nonatomic) NSInteger experience;
@property (nonatomic) NSInteger status;
@property (nonatomic) q createTime;
@property (nonatomic) q modifyTime;
@property (nonatomic) NSString shareQrcodeUri;
@property (nonatomic) NSInteger incomeSharePercent;
@property (nonatomic) NSString specialId;
@property (nonatomic) IESLiveSaaSPBImage avatarBorder;
@property (nonatomic) BOOL hasAvatarBorder;
@property (nonatomic) NSMutableArray realTimeIconsArray;
@property (nonatomic) Q realTimeIconsArray_Count;
@property (nonatomic) NSMutableArray newRealTimeIconsArray;
@property (nonatomic) Q newRealTimeIconsArray_Count;
@property (nonatomic) q topVipNo;
@property (nonatomic) q payScore;
@property (nonatomic) q ticketCount;
@property (nonatomic) IESLiveSaaSPBUser_AnchorInfo anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) NSInteger linkMicStats;
@property (nonatomic) BOOL withFusionShopEntry;
@property (nonatomic) q totalRechargeDiamondCount;
@property (nonatomic) IESLiveSaaSPBUser_AnchorLevel webcastAnchorLevel;
@property (nonatomic) BOOL hasWebcastAnchorLevel;
@property (nonatomic) NSString verifiedContent;
@property (nonatomic) IESLiveSaaSPBUser_AuthorStats authorStats;
@property (nonatomic) BOOL hasAuthorStats;
@property (nonatomic) NSMutableArray topFansArray;
@property (nonatomic) Q topFansArray_Count;
@property (nonatomic) NSInteger userRole;
@property (nonatomic) IESLiveSaaSPBUser_ActivityInfo activityReward;
@property (nonatomic) BOOL hasActivityReward;
@property (nonatomic) IESLiveSaaSPBUser_NobleLevelInfo nobleInfo;
@property (nonatomic) BOOL hasNobleInfo;
@property (nonatomic) IESLiveSaaSPBUser_BrotherhoodInfo brotherhoodInfo;
@property (nonatomic) BOOL hasBrotherhoodInfo;
@property (nonatomic) IESLiveSaaSPBImage personalCard;
@property (nonatomic) BOOL hasPersonalCard;
@property (nonatomic) NSMutableArray mediaBadgeImageListArray;
@property (nonatomic) Q mediaBadgeImageListArray_Count;
@property (nonatomic) IESLiveSaaSPBUser_BizRelation bizRelation;
@property (nonatomic) BOOL hasBizRelation;
@property (nonatomic) BOOL allowBeLocated;
@property (nonatomic) BOOL allowFindByContacts;
@property (nonatomic) BOOL allowOthersDownloadVideo;
@property (nonatomic) BOOL allowOthersDownloadWhenSharingVideo;
@property (nonatomic) BOOL allowShareShowProfile;
@property (nonatomic) BOOL allowShowInGossip;
@property (nonatomic) BOOL allowShowMyAction;
@property (nonatomic) BOOL allowStrangeComment;
@property (nonatomic) BOOL allowUnfollowerComment;
@property (nonatomic) BOOL allowUseLinkmic;
@property (nonatomic) IESLiveSaaSPBUser_AnchorLevel anchorLevel;
@property (nonatomic) BOOL hasAnchorLevel;
@property (nonatomic) IESLiveSaaSPBImage avatarJpg;
@property (nonatomic) BOOL hasAvatarJpg;
@property (nonatomic) NSString bgImgURL;
@property (nonatomic) NSString birthdayDescription;
@property (nonatomic) BOOL birthdayValid;
@property (nonatomic) NSInteger blockStatus;
@property (nonatomic) NSInteger commentRestrict;
@property (nonatomic) NSString constellation;
@property (nonatomic) NSInteger disableIchat;
@property (nonatomic) q enableIchatImg;
@property (nonatomic) NSInteger exp;
@property (nonatomic) q fanTicketCount;
@property (nonatomic) BOOL foldStrangerChat;
@property (nonatomic) q followStatus;
@property (nonatomic) BOOL hotsoonVerified;
@property (nonatomic) NSString hotsoonVerifiedReason;
@property (nonatomic) NSInteger ichatRestrictType;
@property (nonatomic) NSString idStr;
@property (nonatomic) BOOL isFollower;
@property (nonatomic) BOOL isFollowing;
@property (nonatomic) BOOL needProfileGuide;
@property (nonatomic) q payScores;
@property (nonatomic) BOOL pushCommentStatus;
@property (nonatomic) BOOL pushDigg;
@property (nonatomic) BOOL pushFollow;
@property (nonatomic) BOOL pushFriendAction;
@property (nonatomic) BOOL pushIchat;
@property (nonatomic) BOOL pushStatus;
@property (nonatomic) BOOL pushVideoPost;
@property (nonatomic) BOOL pushVideoRecommend;
@property (nonatomic) IESLiveSaaSPBUser_UserStats stats;
@property (nonatomic) BOOL hasStats;
@property (nonatomic) BOOL verifiedMobile;
@property (nonatomic) NSString verifiedReason;
@property (nonatomic) BOOL withCarManagementPermission;
@property (nonatomic) NSInteger ageRange;
@property (nonatomic) q watchDurationMonth;
- (id)getDisplayTextOnlyUnderUIAsepctSetting:useHost:;
- (id)getDisplayTextUnderUISetting:useHost:;
- (id)secUserID;
- (id)userID;
+ (id)finalDisplayText:setting:withUserID:;
+ (id)getDisplayNameWithNickName:displayID:userID:onlyUnderUIAspectSetting:;
+ (id)getDisplayNameWithNickName:displayID:userID:underUISetting:;
+ (id)descriptor;
@end
