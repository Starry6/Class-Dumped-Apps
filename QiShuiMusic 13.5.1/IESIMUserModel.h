@interface IESIMUserModel : IESIMBaseApiModel
@property (nonatomic) IESIMRocketFansGroupInfo rocketFansGroupInfo;
@property (nonatomic) IESIMUserBrandInfoModel brandInfo;
@property (nonatomic) IESIMUserDouPlusToastModel douPlusToast;
@property (nonatomic) IESIMUserAvatarDecotationModel avatarDecorationModel;
@property (nonatomic) NSString shopIronManURL;
@property (nonatomic) NSNumber latestGenericOrderTime;
@property (nonatomic) q proAccountRedDot;
@property (nonatomic) IESIMLiveHonorInfoModel honorInfo;
@property (nonatomic) NSArray starRelatedChallengeList;
@property (nonatomic) NSArray followerDetailModels;
@property (nonatomic) IESIMOriginalMusicianModel originalMusician;
@property (nonatomic) IESIMLifeStoryBlockModel lifeStoryBlockModel;
@property (nonatomic) NSArray platformSyncInfos;
@property (nonatomic) NSArray awemeItems;
@property (nonatomic) q birthdayHideLevel;
@property (nonatomic) IESIMHotSpotListModel hotSpotListModel;
@property (nonatomic) IESIMBizAccountInfo bizAccountInfo;
@property (nonatomic) NSArray profileExtensionAreaCardList;
@property (nonatomic) NSArray profileExtensionAreaNotDisplayCardList;
@property (nonatomic) NSNumber hasCardEditPageEntrance;
@property (nonatomic) NSArray cardSortPriority;
@property (nonatomic) IESIMSaaSAWEUserShareModel shareInfo;
@property (nonatomic) IESIMActivityShareModel activityShare;
@property (nonatomic) IESIMEffectArtistModel effectArtistModel;
@property (nonatomic) BOOL hideShootButton;
@property (nonatomic) BOOL withTaobaoShopEntry;
@property (nonatomic) BOOL withFusionShopEntry;
@property (nonatomic) BOOL liveCommerce;
@property (nonatomic) IESIMURLModel avatarPendantLarger;
@property (nonatomic) IESIMURLModel avatarPendantMedium;
@property (nonatomic) IESIMURLModel avatarPendantThumb;
@property (nonatomic) IESIMURLModel avatar168;
@property (nonatomic) NSString openUid;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString shortID;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString birthday;
@property (nonatomic) q teenUserAge;
@property (nonatomic) BOOL minorMode;
@property (nonatomic) Q userMode;
@property (nonatomic) IESIMUserRIPModel userRIPModel;
@property (nonatomic) Q userPeriod;
@property (nonatomic) BOOL isInDeactivateBufferPeriod;
@property (nonatomic) q gender;
@property (nonatomic) Q showGenderStrategy;
@property (nonatomic) NSString signature;
@property (nonatomic) NSNumber signatureDisplayLines;
@property (nonatomic) IESIMUserAnchorInfo anchorInfo;
@property (nonatomic) NSString signatureLanguage;
@property (nonatomic) NSString contactName;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) IESIMURLModel avatarThumb;
@property (nonatomic) IESIMURLModel avatarMedium;
@property (nonatomic) IESIMURLModel avatarLarger;
@property (nonatomic) IESIMURLModel avatar168FromThumbnail;
@property (nonatomic) IESIMURLModel avatar168FromMedium;
@property (nonatomic) IESIMURLModel avatar300;
@property (nonatomic) IESIMURLModel roomCover;
@property (nonatomic) NSString roomTypeTag;
@property (nonatomic) IESIMURLModel videoIcon;
@property (nonatomic) NSArray profileCover;
@property (nonatomic) NSArray whiteProfileCover;
@property (nonatomic) NSNumber isVerified;
@property (nonatomic) q allowStatus;
@property (nonatomic) q followStatus;
@property (nonatomic) q followerStatus;
@property (nonatomic) q followerRequestStatus;
@property (nonatomic) q blockStatus;
@property (nonatomic) q blockedStatus;
@property (nonatomic) q topStatus;
@property (nonatomic) q hideMyPostStatus;
@property (nonatomic) q hideHerPostStatus;
@property (nonatomic) q taIsFriendSwitchStatus;
@property (nonatomic) NSNumber awemeCount;
@property (nonatomic) NSNumber privateAwemeCount;
@property (nonatomic) NSNumber followingCount;
@property (nonatomic) NSNumber followerCount;
@property (nonatomic) NSNumber favoritingCount;
@property (nonatomic) NSNumber favoritedCount;
@property (nonatomic) BOOL showFavoriteList;
@property (nonatomic) BOOL showEffectList;
@property (nonatomic) NSNumber collectCount;
@property (nonatomic) NSNumber forwardCount;
@property (nonatomic) q registStatus;
@property (nonatomic) NSString thirdName;
@property (nonatomic) BOOL disableSearch;
@property (nonatomic) NSString location;
@property (nonatomic) NSNumber constellation;
@property (nonatomic) NSString customVerifyInfo;
@property (nonatomic) NSString customID;
@property (nonatomic) NSNumber musicEffectLock;
@property (nonatomic) NSString bindPhone;
@property (nonatomic) BOOL isPhoneBinded;
@property (nonatomic) NSString email;
@property (nonatomic) BOOL isEmailVerified;
@property (nonatomic) BOOL isEmailBinded;
@property (nonatomic) BOOL needRecommend;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) q postScriptStatus;
@property (nonatomic) NSString relationShip;
@property (nonatomic) NSString recType;
@property (nonatomic) NSString recommendReasonRelation;
@property (nonatomic) BOOL shouldWriteImpr;
@property (nonatomic) NSNumber storyCount;
@property (nonatomic) BOOL showStory;
@property (nonatomic) BOOL hasFacebookToken;
@property (nonatomic) BOOL hasTwitterToken;
@property (nonatomic) BOOL hasYoutubeToken;
@property (nonatomic) q fbExpireTime;
@property (nonatomic) q twExpireTime;
@property (nonatomic) q ytExpireTime;
@property (nonatomic) Q realNameVerifyStatus;
@property (nonatomic) NSNumber authorityStatus;
@property (nonatomic) NSString verifyInfo;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSDictionary roomDict;
@property (nonatomic) NSString roomData;
@property (nonatomic) NSArray liveUserAuthLevelList;
@property (nonatomic) BOOL isFreeFlowCardUser;
@property (nonatomic) NSNumber starBillboardRank;
@property (nonatomic) BOOL showUserBanDialog;
@property (nonatomic) BOOL showFirstAvatarDecoration;
@property (nonatomic) BOOL hasHelpDeskEntrance;
@property (nonatomic) BOOL enableWish;
@property (nonatomic) IESIMFollowingListSecondaryInfoModel secondaryInfoModel;
@property (nonatomic) Q cancelType;
@property (nonatomic) BOOL showFavoriteListOnItem;
@property (nonatomic) BOOL isDouManager;
@property (nonatomic) BOOL hasUnreadOneDay;
@property (nonatomic) NSNumber oneDayCount;
@property (nonatomic) NSArray oneDayCovers;
@property (nonatomic) BOOL hasStory;
@property (nonatomic) q oneDayBlockType;
@property (nonatomic) BOOL pushFollowOff;
@property (nonatomic) BOOL pushDiggOff;
@property (nonatomic) BOOL pushCommentOff;
@property (nonatomic) NSDate createTime;
@property (nonatomic) NSDate uniqueIdModifyTime;
@property (nonatomic) NSDate registerTime;
@property (nonatomic) BOOL hasActivityMedal;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString country;
@property (nonatomic) NSString province;
@property (nonatomic) NSString city;
@property (nonatomic) NSString district;
@property (nonatomic) NSString schoolName;
@property (nonatomic) NSString schoolPoiId;
@property (nonatomic) q schooType;
@property (nonatomic) NSString collegeName;
@property (nonatomic) NSString enrollYear;
@property (nonatomic) Q educationType;
@property (nonatomic) q schoolCircleAuth;
@property (nonatomic) Q schoolVisibleType;
@property (nonatomic) BOOL canModifySchoolInfo;
@property (nonatomic) BOOL showCommerceEntry;
@property (nonatomic) BOOL hasGoodsNewbieTask;
@property (nonatomic) BOOL hasAwemeGoodsEntry;
@property (nonatomic) BOOL isNoAccountAd;
@property (nonatomic) NSArray relativeUsers;
@property (nonatomic) IESIMUserCommercePermissionModel commercePermission;
@property (nonatomic) NSString enterpriseUserInfo;
@property (nonatomic) AWEEnterpriseUserInfoModel enterpriseInfoModel;
@property (nonatomic) NSArray homepageBottomToast;
@property (nonatomic) NSArray adCoverURL;
@property (nonatomic) IESIMAdCoverTitleModel adCoverTitleModel;
@property (nonatomic) NSString orderID;
@property (nonatomic) BOOL isDisciplineMember;
@property (nonatomic) Q verificationType;
@property (nonatomic) Q verificationBadgeType;
@property (nonatomic) NSString enterpriseVerifyInfo;
@property (nonatomic) BOOL isGovMediaVip;
@property (nonatomic) BOOL hasNewDownloadAddress;
@property (nonatomic) BOOL showArtistPlaylist;
@property (nonatomic) NSNumber allFollowersCount;
@property (nonatomic) NSArray yellowPoints;
@property (nonatomic) IESIMUserTabSetting tabSettings;
@property (nonatomic) NSNumber commerceUserLevel;
@property (nonatomic) BOOL privateAccount;
@property (nonatomic) BOOL forcePrivateAccount;
@property (nonatomic) BOOL isAcceptPrivatePolicy;
@property (nonatomic) NSString youtubeChannelTitle;
@property (nonatomic) NSString youtubeChannelId;
@property (nonatomic) NSString youtubeRefreshToken;
@property (nonatomic) q youtubeLastRefreshTime;
@property (nonatomic) NSString googleAccount;
@property (nonatomic) NSString insId;
@property (nonatomic) NSString twitterId;
@property (nonatomic) NSString twitterName;
@property (nonatomic) NSString twitterNameToShow;
@property (nonatomic) NSNumber appleAccount;
@property (nonatomic) BOOL liveAgreement;
@property (nonatomic) BOOL hideLocation;
@property (nonatomic) BOOL withNewGoods;
@property (nonatomic) BOOL douPlusShareLocation;
@property (nonatomic) q duetSetting;
@property (nonatomic) q commentSetting;
@property (nonatomic) q downloadSetting;
@property (nonatomic) BOOL postDefaultDownloadSetting;
@property (nonatomic) BOOL shouldShowPhotoIntroductionBubble;
@property (nonatomic) BOOL contentLanguageAlreadyPopup;
@property (nonatomic) q postNotificationStatus;
@property (nonatomic) NSString accountRegion;
@property (nonatomic) NSString region;
@property (nonatomic) BOOL isBindedToutiao;
@property (nonatomic) BOOL shouldFollowWhenTappedFollowButton;
@property (nonatomic) BOOL preventDownload;
@property (nonatomic) BOOL withDouEntry;
@property (nonatomic) BOOL hasDouPlusEntry;
@property (nonatomic) BOOL shouldDisplayWhiteValantineEntry;
@property (nonatomic) IESIMSprintSupportUserInfoModel sprintModel;
@property (nonatomic) BOOL isStar;
@property (nonatomic) NSArray typeLabelArray;
@property (nonatomic) NSString addressName;
@property (nonatomic) Q userLoginPlatform;
@property (nonatomic) NSNumber userDynamicCount;
@property (nonatomic) NSString language;
@property (nonatomic) BOOL hasInsights;
@property (nonatomic) q profileDefaultTab;
@property (nonatomic) NSString anchorScheduleGuideText;
@property (nonatomic) NSString cleanFollowingReason;
@property (nonatomic) IESIMRecommendTemplateModel recommendTemplate;
@property (nonatomic) BOOL enableEditAlias;
@property (nonatomic) q impressionIndex;
@property (nonatomic) BOOL isEffectArtist;
@property (nonatomic) BOOL showYellowDot;
@property (nonatomic) NSNumber xmasUnlockCount;
@property (nonatomic) BOOL hasInvited;
@property (nonatomic) BOOL withLubanEntry;
@property (nonatomic) BOOL shouldShowCompanyHomepageTab;
@property (nonatomic) q commentFilterStatus;
@property (nonatomic) BOOL withStarAtlasEntrance;
@property (nonatomic) BOOL isContactFriends;
@property (nonatomic) double recommendReasonHeight;
@property (nonatomic) BOOL userLaunchedAgeGate;
@property (nonatomic) NSString relationString;
@property (nonatomic) NSNumber recommendScore;
@property (nonatomic) BOOL isAddressBookFriend;
@property (nonatomic) Q wxType;
@property (nonatomic) IESIMUserPermissionModel permissionModel;
@property (nonatomic) IESIMUserFansPushModel fansPushModel;
@property (nonatomic) BOOL nicknameNeedUpdate;
@property (nonatomic) BOOL avatarNeedUpdate;
@property (nonatomic) BOOL uniqueIdNeedUpdate;
@property (nonatomic) q userRate;
@property (nonatomic) IESIMUserRateRemindInfoModel userRateRemindInfo;
@property (nonatomic) IESIMInfringementReportInfoModel infringementReportInfo;
@property (nonatomic) BOOL dpLevel;
@property (nonatomic) NSString nameField;
@property (nonatomic) BOOL needAddrCard;
@property (nonatomic) BOOL isDouplusOldUser;
@property (nonatomic) BOOL isMixUser;
@property (nonatomic) BOOL isPlayletUser;
@property (nonatomic) IESIMUserStarBillBoardInfoModel billBoardInfoModel;
@property (nonatomic) IESIMUnreadAwemeModel unreadAwemeModel;
@property (nonatomic) NSNumber friendCount;
@property (nonatomic) q awemeHotsoonAuth;
@property (nonatomic) q awemeHotsoonRelationAuth;
@property (nonatomic) NSString registerFrom;
@property (nonatomic) BOOL shouldShowMessageEntry;
@property (nonatomic) BOOL hasCommentPinPermission;
@property (nonatomic) BOOL canSetGeofencing;
@property (nonatomic) q musicComplianceAccount;
@property (nonatomic) Q followBtnType;
@property (nonatomic) BOOL followBtnShouldShowSendMsgText;
@property (nonatomic) BOOL followBackShowSendMsgTrackSent;
@property (nonatomic) q showSecretBanner;
@property (nonatomic) q countStatus;
@property (nonatomic) BOOL everOver1kFollower;
@property (nonatomic) IESIMUserHometownModel hometown;
@property (nonatomic) BOOL canModifyHometownInfo;
@property (nonatomic) BOOL hometownInvisible;
@property (nonatomic) NSString hometownFellowship;
@property (nonatomic) BOOL showAvatarDecorationEntrance;
@property (nonatomic) q lastFollowStatus;
@property (nonatomic) Q imUserAgeStageType;
@property (nonatomic) NSString imExaminationInfo;
@property (nonatomic) BOOL canShowGroupCard;
@property (nonatomic) NSString profileCoverDominantColor;
@property (nonatomic) IESIMVSPersonalModel vsPersonal;
@property (nonatomic) NSNumber playCount;
@property (nonatomic) IESIMAFDFamiliarActivityModel familiarActivityModel;
@property (nonatomic) BOOL followAsSubscription;
@property (nonatomic) BOOL imSubscriptionPublisher;
@property (nonatomic) BOOL showGoodsServiceSubscription;
@property (nonatomic) BOOL hasSubscribedGoodsService;
@property (nonatomic) NSString alias;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aliasWithScene:;
- (id)authorityStatus;
- (long long)downloadSetting;
- (BOOL)dpLevel;
- (BOOL)hasTwitterToken;
- (BOOL)hasUnreadOneDay;
- (BOOL)hideShootButton;
- (id)huoshanSyncInfo;
- (BOOL)isSyncToHuoshan;
- (long long)oneDayBlockType;
- (id)openUid;
- (void)setAddressName:;
- (void)setAllowStatus:;
- (void)setBlockStatus:;
- (void)setContentLanguageAlreadyPopup:;
- (void)setCountStatus:;
- (void)setDuetSetting:;
- (void)setPushDiggOff:;
- (void)setTeenUserAge:;
- (void)setTwitterName:;
- (id)awe_displayName;
- (BOOL)enableEditAlias;
- (id)favoritingCount;
- (BOOL)hasDouPlusEntry;
- (BOOL)hasYoutubeToken;
- (id)hotSpotListModelJSONTransformer;
- (BOOL)isBindedToutiao;
- (BOOL)isEmailVerified;
- (BOOL)isSyncToToutiao;
- (id)musicEffectLock;
- (id)orderID;
- (id)passport_region;
- (id)permissionModel;
- (BOOL)preventDownload;
- (id)recType;
- (id)recommendReason;
- (void)setAvatarThumb:;
- (void)setCollegeName:;
- (void)setHasInsights:;
- (void)setOneDayCount:;
- (void)setSchoolPoiId:;
- (void)setSprintModel:;
- (void)setTabSettings:;
- (id)shortID;
- (BOOL)shouldWriteImpr;
- (id)tiktokDisplayID;
- (id)uniqueIDForShow;
- (id)xmasUnlockCount;
- (id)accountRegion;
- (id)activityShare;
- (id)adCoverTitleModel;
- (id)adCoverURL;
- (id)addressName;
- (id)allFollowersCount;
- (long long)allowStatus;
- (id)anchorInfo;
- (id)anchorScheduleGuideText;
- (BOOL)authorizedToDownload;
- (id)avatar168;
- (id)avatar168FromMedium;
- (id)avatar168FromThumbnail;
- (id)avatar300;
- (id)avatarDecorationModel;
- (id)avatarLarger;
- (id)avatarMedium;
- (BOOL)avatarNeedUpdate;
- (id)avatarPendantLarger;
- (id)avatarPendantMedium;
- (id)avatarPendantThumb;
- (id)avatarThumb;
- (id)avatarURLs;
- (id)awemeCount;
- (long long)awemeHotsoonAuth;
- (long long)awemeHotsoonRelationAuth;
- (id)awemeItems;
- (id)billBoardInfoModel;
- (id)bindPhone;
- (long long)birthdayHideLevel;
- (id)bizAccountInfo;
- (long long)blockStatus;
- (long long)blockedStatus;
- (id)brandInfo;
- (BOOL)canModifyHometownInfo;
- (BOOL)canModifySchoolInfo;
- (BOOL)canSetGeofencing;
- (BOOL)canShowGroupCard;
- (id)cardSortPriority;
- (id)cleanFollowingReason;
- (id)collectCount;
- (id)collegeName;
- (long long)commentFilterStatus;
- (long long)commentSetting;
- (id)commercePermission;
- (id)commerceUserLevel;
- (BOOL)contentLanguageAlreadyPopup;
- (long long)countStatus;
- (id)customID;
- (id)customVerifyInfo;
- (BOOL)disableSearch;
- (BOOL)douPlusShareLocation;
- (id)douPlusToast;
- (long long)duetSetting;
- (unsigned long long)educationType;
- (id)effectArtistModel;
- (BOOL)enableWish;
- (id)enrollYear;
- (id)enterpriseInfoModel;
- (id)enterpriseUserInfo;
- (id)enterpriseVerifyInfo;
- (BOOL)everOver1kFollower;
- (id)familiarActivityModel;
- (id)fansPushModel;
- (id)favoritedCount;
- (long long)fbExpireTime;
- (BOOL)followAsSubscription;
- (BOOL)followBackShowSendMsgTrackSent;
- (BOOL)followBtnShouldShowSendMsgText;
- (unsigned long long)followBtnType;
- (long long)followStatus;
- (id)followTypeString;
- (id)followerCount;
- (id)followerDetailModels;
- (long long)followerRequestStatus;
- (long long)followerStatus;
- (id)followingCount;
- (BOOL)forcePrivateAccount;
- (id)forwardCount;
- (id)genderDisplayString;
- (unsigned long long)getHowOld;
- (id)googleAccount;
- (BOOL)hasActivityMedal;
- (BOOL)hasAwemeGoodsEntry;
- (id)hasCardEditPageEntrance;
- (BOOL)hasCommentPinPermission;
- (BOOL)hasFacebookToken;
- (BOOL)hasGoodsNewbieTask;
- (BOOL)hasHelpDeskEntrance;
- (BOOL)hasInsights;
- (BOOL)hasInvited;
- (BOOL)hasNewDownloadAddress;
- (BOOL)hasStory;
- (BOOL)hasSubscribedGoodsService;
- (long long)hideHerPostStatus;
- (BOOL)hideLocation;
- (long long)hideMyPostStatus;
- (id)homepageBottomToast;
- (id)hometown;
- (id)hometownFellowship;
- (BOOL)hometownInvisible;
- (id)honorInfo;
- (id)hotSpotListModel;
- (id)imExaminationInfo;
- (BOOL)imSubscriptionPublisher;
- (unsigned long long)imUserAgeStageType;
- (id)infringementReportInfo;
- (id)insId;
- (BOOL)isAcceptPrivatePolicy;
- (BOOL)isAddressBookFriend;
- (BOOL)isCompanyProfile;
- (BOOL)isContactFriends;
- (BOOL)isDisciplineMember;
- (BOOL)isDouManager;
- (BOOL)isDouplusOldUser;
- (BOOL)isEffectArtist;
- (BOOL)isEmailBinded;
- (BOOL)isFreeFlowCardUser;
- (BOOL)isGovMediaVip;
- (BOOL)isI18NShopVC;
- (BOOL)isInDeactivateBufferPeriod;
- (BOOL)isMixUser;
- (BOOL)isNoAccountAd;
- (BOOL)isPersonalVerifiedEffectArtist;
- (BOOL)isPhoneBinded;
- (BOOL)isPlayletUser;
- (BOOL)isShowEditEnterpriseInfo;
- (BOOL)isStar;
- (BOOL)isSyncToPlatform:;
- (BOOL)isVerifiedEffectArtist;
- (BOOL)isVerifiedEnterprise;
- (BOOL)isVerifiedMusician;
- (BOOL)isVerifiedUser;
- (BOOL)isVerifiedUserI18N;
- (long long)lastFollowStatus;
- (id)latestGenericOrderTime;
- (id)lifeStoryBlockModel;
- (BOOL)liveAgreement;
- (BOOL)liveCommerce;
- (id)liveUserAuthLevelList;
- (BOOL)minorMode;
- (long long)musicComplianceAccount;
- (BOOL)needAddrCard;
- (BOOL)needRecommend;
- (BOOL)needShowFavoriteList;
- (BOOL)nicknameNeedUpdate;
- (id)oneDayCount;
- (id)oneDayCovers;
- (id)originalMusician;
- (id)passport_displayName;
- (BOOL)passport_isDisciplineMember;
- (id)passport_nickname;
- (id)passport_uid;
- (id)platformSyncInfos;
- (BOOL)postDefaultDownloadSetting;
- (long long)postNotificationStatus;
- (long long)postScriptStatus;
- (BOOL)privateAccount;
- (id)privateAwemeCount;
- (long long)proAccountRedDot;
- (id)profileCover;
- (id)profileCoverDominantColor;
- (long long)profileDefaultTab;
- (id)profileExtensionAreaCardList;
- (id)profileExtensionAreaNotDisplayCardList;
- (id)province;
- (BOOL)pushCommentOff;
- (BOOL)pushDiggOff;
- (BOOL)pushFollowOff;
- (unsigned long long)realNameVerifyStatus;
- (double)recommendReasonHeight;
- (id)recommendReasonRelation;
- (id)recommendScore;
- (id)recommendTemplate;
- (long long)registStatus;
- (id)registerFrom;
- (id)registerTime;
- (id)relationShip;
- (id)relationString;
- (id)relativeUsers;
- (void)resetUserDataWhenBlocked;
- (id)rocketFansGroupInfo;
- (id)roomCover;
- (id)roomData;
- (id)roomDict;
- (id)roomTypeTag;
- (long long)schooType;
- (long long)schoolCircleAuth;
- (id)schoolPoiId;
- (unsigned long long)schoolVisibleType;
- (id)secUserID;
- (id)secondaryInfoModel;
- (void)setAccountRegion:;
- (void)setActivityShare:;
- (void)setAdCoverTitleModel:;
- (void)setAdCoverURL:;
- (void)setAllFollowersCount:;
- (void)setAnchorInfo:;
- (void)setAuthorityStatus:;
- (void)setAvatar168:;
- (void)setAvatar300:;
- (void)setAvatarDecorationModel:;
- (void)setAvatarMedium:;
- (void)setAvatarNeedUpdate:;
- (void)setAvatarPendantLarger:;
- (void)setAvatarPendantMedium:;
- (void)setAvatarPendantThumb:;
- (void)setAwemeCount:;
- (void)setAwemeHotsoonAuth:;
- (void)setAwemeHotsoonRelationAuth:;
- (void)setAwemeItems:;
- (void)setBillBoardInfoModel:;
- (void)setBirthdayHideLevel:;
- (void)setBizAccountInfo:;
- (void)setBlockedStatus:;
- (void)setBrandInfo:;
- (void)setCanModifyHometownInfo:;
- (void)setCanModifySchoolInfo:;
- (void)setCanSetGeofencing:;
- (void)setCanShowGroupCard:;
- (void)setCardSortPriority:;
- (void)setCleanFollowingReason:;
- (void)setCollectCount:;
- (void)setCommentFilterStatus:;
- (void)setCommentSetting:;
- (void)setCommercePermission:;
- (void)setCommerceUserLevel:;
- (void)setCustomID:;
- (void)setCustomVerifyInfo:;
- (void)setDisableSearch:;
- (void)setDouPlusShareLocation:;
- (void)setDouPlusToast:;
- (void)setDownloadSetting:;
- (void)setDpLevel:;
- (void)setEducationType:;
- (void)setEffectArtistModel:;
- (void)setEnableEditAlias:;
- (void)setEnableWish:;
- (void)setEnrollYear:;
- (void)setEnterpriseInfoModel:;
- (void)setEnterpriseUserInfo:;
- (void)setEnterpriseVerifyInfo:;
- (void)setEverOver1kFollower:;
- (void)setFamiliarActivityModel:;
- (void)setFansPushModel:;
- (void)setFavoritedCount:;
- (void)setFavoritingCount:;
- (void)setFbExpireTime:;
- (void)setFollowAsSubscription:;
- (void)setFollowBackShowSendMsgTrackSent:;
- (void)setFollowBtnShouldShowSendMsgText:;
- (void)setFollowBtnType:;
- (void)setFollowStatus:;
- (void)setFollowerCount:;
- (void)setFollowerDetailModels:;
- (void)setFollowerRequestStatus:;
- (void)setFollowerStatus:;
- (void)setFollowingCount:;
- (void)setForcePrivateAccount:;
- (void)setForwardCount:;
- (void)setGoogleAccount:;
- (void)setHasActivityMedal:;
- (void)setHasAwemeGoodsEntry:;
- (void)setHasCardEditPageEntrance:;
- (void)setHasDouPlusEntry:;
- (void)setHasFacebookToken:;
- (void)setHasGoodsNewbieTask:;
- (void)setHasHelpDeskEntrance:;
- (void)setHasInvited:;
- (void)setHasNewDownloadAddress:;
- (void)setHasStory:;
- (void)setHasSubscribedGoodsService:;
- (void)setHasTwitterToken:;
- (void)setHasUnreadOneDay:;
- (void)setHasYoutubeToken:;
- (void)setHideHerPostStatus:;
- (void)setHideLocation:;
- (void)setHideMyPostStatus:;
- (void)setHideShootButton:;
- (void)setHomepageBottomToast:;
- (void)setHometown:;
- (void)setHometownFellowship:;
- (void)setHometownInvisible:;
- (void)setHonorInfo:;
- (void)setHotSpotListModel:;
- (void)setImExaminationInfo:;
- (void)setImSubscriptionPublisher:;
- (void)setImUserAgeStageType:;
- (void)setInfringementReportInfo:;
- (void)setInsId:;
- (void)setIsAcceptPrivatePolicy:;
- (void)setIsAddressBookFriend:;
- (void)setIsBindedToutiao:;
- (void)setIsContactFriends:;
- (void)setIsDisciplineMember:;
- (void)setIsDouManager:;
- (void)setIsDouplusOldUser:;
- (void)setIsEffectArtist:;
- (void)setIsFreeFlowCardUser:;
- (void)setIsGovMediaVip:;
- (void)setIsInDeactivateBufferPeriod:;
- (void)setIsMixUser:;
- (void)setIsNoAccountAd:;
- (void)setIsPlayletUser:;
- (void)setIsStar:;
- (void)setLastFollowStatus:;
- (void)setLatestGenericOrderTime:;
- (void)setLifeStoryBlockModel:;
- (void)setLiveAgreement:;
- (void)setLiveCommerce:;
- (void)setLiveUserAuthLevelList:;
- (void)setMinorMode:;
- (void)setMusicComplianceAccount:;
- (void)setMusicEffectLock:;
- (void)setNeedAddrCard:;
- (void)setNicknameNeedUpdate:;
- (void)setOneDayBlockType:;
- (void)setOneDayCovers:;
- (void)setOpenUid:;
- (void)setOrderID:;
- (void)setOriginalMusician:;
- (void)setPermissionModel:;
- (void)setPlatformSyncInfos:;
- (void)setPostDefaultDownloadSetting:;
- (void)setPostNotificationStatus:;
- (void)setPreventDownload:;
- (void)setPrivateAccount:;
- (void)setPrivateAwemeCount:;
- (void)setProAccountRedDot:;
- (void)setProfileCover:;
- (void)setProfileCoverDominantColor:;
- (void)setProfileDefaultTab:;
- (void)setProfileExtensionAreaCardList:;
- (void)setProfileExtensionAreaNotDisplayCardList:;
- (void)setProvince:;
- (void)setPushCommentOff:;
- (void)setPushFollowOff:;
- (void)setRealNameVerifyStatus:;
- (void)setRecType:;
- (void)setRecommendReason:;
- (void)setRecommendReasonHeight:;
- (void)setRecommendReasonRelation:;
- (void)setRecommendScore:;
- (void)setRecommendTemplate:;
- (void)setRegistStatus:;
- (void)setRegisterFrom:;
- (void)setRegisterTime:;
- (void)setRelationShip:;
- (void)setRelationString:;
- (void)setRelativeUsers:;
- (void)setRocketFansGroupInfo:;
- (void)setRoomData:;
- (void)setRoomDict:;
- (void)setSchooType:;
- (void)setSchoolCircleAuth:;
- (void)setSchoolName:;
- (void)setSchoolVisibleType:;
- (void)setSecUserID:;
- (void)setSecondaryInfoModel:;
- (void)setShopIronManURL:;
- (void)setShortID:;
- (void)setShouldDisplayWhiteValantineEntry:;
- (void)setShouldShowCompanyHomepageTab:;
- (void)setShouldShowMessageEntry:;
- (void)setShouldShowPhotoIntroductionBubble:;
- (void)setShowArtistPlaylist:;
- (void)setShowAvatarDecorationEntrance:;
- (void)setShowCommerceEntry:;
- (void)setShowFavoriteListOnItem:;
- (void)setShowFirstAvatarDecoration:;
- (void)setShowGenderStrategy:;
- (void)setShowGoodsServiceSubscription:;
- (void)setShowSecretBanner:;
- (void)setShowStory:;
- (void)setShowUserBanDialog:;
- (void)setShowYellowDot:;
- (void)setSignatureDisplayLines:;
- (void)setSignatureLanguage:;
- (void)setStarBillboardRank:;
- (void)setStarRelatedChallengeList:;
- (void)setTaIsFriendSwitchStatus:;
- (void)setThirdName:;
- (void)setTopStatus:;
- (void)setTwExpireTime:;
- (void)setTypeLabelArray:;
- (void)setUniqueIdModifyTime:;
- (void)setUniqueIdNeedUpdate:;
- (void)setUnreadAwemeModel:;
- (void)setUserDynamicCount:;
- (void)setUserLaunchedAgeGate:;
- (void)setUserLoginPlatform:;
- (void)setUserMode:;
- (void)setUserPeriod:;
- (void)setUserRIPModel:;
- (void)setUserRate:;
- (void)setUserRateRemindInfo:;
- (void)setVerificationBadgeType:;
- (void)setVerifyInfo:;
- (void)setVideoIcon:;
- (void)setVsPersonal:;
- (void)setWhiteProfileCover:;
- (void)setWithDouEntry:;
- (void)setWithLubanEntry:;
- (void)setWithNewGoods:;
- (void)setWithStarAtlasEntrance:;
- (void)setWithTaobaoShopEntry:;
- (void)setWxType:;
- (void)setXmasUnlockCount:;
- (void)setYellowPoints:;
- (void)setYoutubeChannelId:;
- (void)setYoutubeChannelTitle:;
- (void)setYoutubeLastRefreshTime:;
- (void)setYoutubeRefreshToken:;
- (void)setYtExpireTime:;
- (id)shopIronManURL;
- (BOOL)shouldDisplayWhiteValantineEntry;
- (BOOL)shouldFollowWhenTappedFollowButton;
- (BOOL)shouldShowCompanyHomepageTab;
- (BOOL)shouldShowMessageEntry;
- (BOOL)shouldShowPhotoIntroductionBubble;
- (BOOL)shouldShowStarRelatedChallengeList;
- (BOOL)shouldShowUniqueID;
- (BOOL)showArtistPlaylist;
- (BOOL)showAvatarDecorationEntrance;
- (BOOL)showCommerceEntry;
- (BOOL)showEffectList;
- (BOOL)showFavoriteList;
- (BOOL)showFavoriteListOnItem;
- (BOOL)showFirstAvatarDecoration;
- (unsigned long long)showGenderStrategy;
- (BOOL)showGoodsServiceSubscription;
- (long long)showPrivateTab;
- (long long)showSecretBanner;
- (BOOL)showStory;
- (BOOL)showUserBanDialog;
- (BOOL)showYellowDot;
- (id)signatureDisplayLines;
- (id)signatureLanguage;
- (id)socialName;
- (id)sprintModel;
- (id)starBillboardRank;
- (id)starRelatedChallengeList;
- (id)syncInfoWithPlatformName:;
- (long long)taIsFriendSwitchStatus;
- (id)tabSettings;
- (long long)teenUserAge;
- (id)thirdName;
- (long long)topStatus;
- (id)toutiaoDetailModel;
- (long long)twExpireTime;
- (id)twitterName;
- (id)twitterNameToShow;
- (id)typeLabelArray;
- (id)uniqueIdModifyTime;
- (BOOL)uniqueIdNeedUpdate;
- (id)unreadAwemeModel;
- (id)userDynamicCount;
- (id)userFriendString:;
- (BOOL)userLaunchedAgeGate;
- (unsigned long long)userLoginPlatform;
- (id)userNameWithScene:;
- (unsigned long long)userPeriod;
- (id)userRIPModel;
- (long long)userRate;
- (id)userRateRemindInfo;
- (unsigned long long)verificationBadgeType;
- (id)verificationDescription;
- (id)verifiedIconName;
- (id)verifyInfo;
- (id)videoIcon;
- (id)vsPersonal;
- (id)whiteProfileCover;
- (BOOL)withDouEntry;
- (BOOL)withLubanEntry;
- (BOOL)withNewGoods;
- (BOOL)withStarAtlasEntrance;
- (BOOL)withTaobaoShopEntry;
- (unsigned long long)wxType;
- (id)yellowPoints;
- (id)youtubeChannelId;
- (id)youtubeChannelTitle;
- (long long)youtubeLastRefreshTime;
- (id)youtubeRefreshToken;
- (long long)ytExpireTime;
- (id)city;
- (id)playCount;
- (void)setPlayCount:;
- (id)contactName;
- (void)setCountryCode:;
- (unsigned long long)userMode;
- (id)country;
- (id)countryCode;
- (void)setSignature:;
- (id)userID;
- (id)init;
- (id)signature;
- (void)setBirthday:;
- (id)phoneNumber;
- (void)setRegion:;
- (long long)gender;
- (void)setLanguage:;
- (id)language;
- (id)appleAccount;
- (id)alias;
- (void)setPhoneNumber:;
- (id)initWithDictionary:error:;
- (id)birthday;
- (id)createTime;
- (BOOL)following;
- (void)setGender:;
- (id)region;
- (void)setConstellation:;
- (void)setCountry:;
- (id)displayName;
- (id)nickname;
- (id)location;
- (id)shareInfo;
- (id)constellation;
- (void)setLocation:;
- (void)setStoryCount:;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (id)email;
- (id)storyCount;
- (void)setAlias:;
- (void)setShareInfo:;
- (void)setNickname:;
- (void)setUserID:;
- (void)setCity:;
- (id)isVerified;
- (unsigned long long)verificationType;
- (void)setVerificationType:;
- (id)roomID;
- (void)setRoomID:;
- (void)setContactName:;
- (void)setDistrict:;
- (id)district;
- (id)nameField;
- (id)friendCount;
- (void)setFriendCount:;
- (void)setNameField:;
- (void)setAppleAccount:;
- (long long)impressionIndex;
- (void)setImpressionIndex:;
- (id)schoolName;
- (void)setCancelType:;
- (unsigned long long)cancelType;
- (id)twitterId;
- (void)setTwitterId:;
- (void)setWithFusionShopEntry:;
- (BOOL)withFusionShopEntry;
+ (id)awemeHotsoonAuthJSONTransformer;
+ (id)originalMusicianJSONTransformer;
+ (id)unreadAwemeModelJSONTransformer;
+ (id)hideMyPostStatusJSONTransformer;
+ (id)activityShareJSONTransformer;
+ (id)adCoverTitleModelJSONTransformer;
+ (id)adCoverURLJSONTransformer;
+ (id)allowStatusJSONTransformer;
+ (id)avatar168JSONTransformer;
+ (id)avatar300JSONTransformer;
+ (id)avatarDecorationModelJSONTransformer;
+ (id)avatarLargerJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)avatarThumbJSONTransformer;
+ (id)awemeHotsoonRelationAuthJSONTransformer;
+ (id)awemeItemsJSONTransformer;
+ (id)billBoardInfoModelJSONTransformer;
+ (id)bizAccountInfoJSONTransformer;
+ (id)blockStatusJSONTransformer;
+ (id)blockedStatusJSONTransformer;
+ (id)brandInfoModelJSONTransformer;
+ (id)cancelTypeJSONTransformer;
+ (id)commercePermissionJSONTransformer;
+ (id)createTimeJSONTransformer;
+ (id)dictFromJsonString:;
+ (id)douPlusToastJSONTransformer;
+ (id)effectArtistModelJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)followerDetailModelsJSONTransformer;
+ (id)followerRequestStatusJSONTransformer;
+ (id)followerStatusJSONTransformer;
+ (id)genderJSONTransformer;
+ (id)hideHerPostStatusJSONTransformer;
+ (id)homepageBottomToastJSONTransformer;
+ (id)hometownJSONTransformer;
+ (id)honorInfoJSONTransformer;
+ (id)infringementReportInfoJSONTransformer;
+ (id)instanceWithJSONDictionary:;
+ (id)lifeStoryBlockModelJSONTransformer;
+ (id)oneDayBlockTypeJSONTransformer;
+ (id)oneDayCoversJSONTransformer;
+ (id)permissionModelJSONTransformer;
+ (id)platformSyncInfosJSONTransformer;
+ (id)postNotificationStatusJSONTransformer;
+ (id)profileCoverJSONTransformer;
+ (id)profileDefaultTabJSONTransformer;
+ (id)profileExtensionAreaCardListJSONTransformer;
+ (id)profileExtensionAreaNotDisplayCardListJSONTransformer;
+ (id)recommendTemplateJSONTransformer;
+ (id)registStatusJSONTransformer;
+ (void)registerKeyPath:;
+ (id)registerTimeJSONTransformer;
+ (id)registeredKeyPaths;
+ (id)relativeUsersJSONTransformer;
+ (id)rocketFansGroupInfoJSONTransformer;
+ (id)roomCoverJSONTransformer;
+ (id)roomDictJSONTransformer;
+ (id)roomIDJSONTransformer;
+ (void)runOnceForLazyRegister;
+ (id)schooTypeJSONTransformer;
+ (id)secondaryInfoModelJSONTransformer;
+ (id)shareInfoJSONTransformer;
+ (id)sprintModelJSONTransformer;
+ (id)starRelatedChallengeListJSONTransformer;
+ (id)taIsFriendSwitchStatusJSONTransformer;
+ (id)tabSettingsJSONTransformer;
+ (id)topStatusJSONTransformer;
+ (id)uniqueIdModifyTimeJSONTransformer;
+ (id)userLoginPlatformJSONTransformer;
+ (id)userRIPModelJSONTransformer;
+ (id)userRateRemindInfoJSONTransformer;
+ (id)verifiedIconNameWithType:;
+ (id)videoIconJSONTransformer;
+ (id)vsPersonalJSONTransformer;
+ (id)whiteProfileCoverJSONTransformer;
+ (id)yellowPointsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
