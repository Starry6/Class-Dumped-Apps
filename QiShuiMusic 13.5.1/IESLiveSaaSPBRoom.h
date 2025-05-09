@interface IESLiveSaaSPBRoom : GPBMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) q status;
@property (nonatomic) NSString ownerOpenId;
@property (nonatomic) NSString ownerUnionId;
@property (nonatomic) NSString title;
@property (nonatomic) q userCount;
@property (nonatomic) q createTime;
@property (nonatomic) q osType;
@property (nonatomic) q clientVersion;
@property (nonatomic) BOOL withLinkmic;
@property (nonatomic) IESLiveSaaSPBImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) IESLiveSaaSPBImage dynamicCover;
@property (nonatomic) BOOL hasDynamicCover;
@property (nonatomic) NSString shareURL;
@property (nonatomic) NSString anchorShareText;
@property (nonatomic) NSString userShareText;
@property (nonatomic) q streamId;
@property (nonatomic) IESLiveSaaSPBStreamUrl streamURL;
@property (nonatomic) BOOL hasStreamURL;
@property (nonatomic) q mosaicStatus;
@property (nonatomic) NSString mosaicTip;
@property (nonatomic) IESLiveSaaSPBLinkMic linkMic;
@property (nonatomic) BOOL hasLinkMic;
@property (nonatomic) q luckymoneyNum;
@property (nonatomic) NSMutableArray decoListArray;
@property (nonatomic) Q decoListArray_Count;
@property (nonatomic) NSMutableArray topFansArray;
@property (nonatomic) Q topFansArray_Count;
@property (nonatomic) IESLiveSaaSPBRoomStats stats;
@property (nonatomic) BOOL hasStats;
@property (nonatomic) IESLiveSaaSPBUser owner;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) BOOL hasCommerceGoods;
@property (nonatomic) BOOL liveTypeAudio;
@property (nonatomic) BOOL liveTypeThirdParty;
@property (nonatomic) BOOL liveTypeScreenshot;
@property (nonatomic) IESLiveSaaSPBRoomAuthStatus roomAuth;
@property (nonatomic) BOOL hasRoomAuth;
@property (nonatomic) NSString introduction;
@property (nonatomic) IESLiveSaaSPBImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) q layout;
@property (nonatomic) NSString waitCopy;
@property (nonatomic) IESLiveSaaSPBImage guideButton;
@property (nonatomic) BOOL hasGuideButton;
@property (nonatomic) NSString previewCopy;
@property (nonatomic) BOOL useFilter;
@property (nonatomic) q giftMsgStyle;
@property (nonatomic) NSString finishURL;
@property (nonatomic) BOOL isShowUserCardSwitch;
@property (nonatomic) NSString videoFeedTag;
@property (nonatomic) q fansclubMsgStyle;
@property (nonatomic) q followMsgStyle;
@property (nonatomic) q shareMsgStyle;
@property (nonatomic) q roomLayout;
@property (nonatomic) NSString shortTitle;
@property (nonatomic) q likeCount;
@property (nonatomic) NSString anchorScheduledTimeText;
@property (nonatomic) NSString contentTag;
@property (nonatomic) IESLiveSaaSPBImage contentLabel;
@property (nonatomic) BOOL hasContentLabel;
@property (nonatomic) IESLiveSaaSPBImage operationLabel;
@property (nonatomic) BOOL hasOperationLabel;
@property (nonatomic) NSInteger anchorTabType;
@property (nonatomic) IESLiveSaaSPBGameExtra gameExtra;
@property (nonatomic) BOOL hasGameExtra;
@property (nonatomic) IESLiveSaaSPBCommentBox commentBox;
@property (nonatomic) BOOL hasCommentBox;
@property (nonatomic) NSInteger businessLive;
@property (nonatomic) BOOL withKtv;
@property (nonatomic) BOOL withDrawSomething;
@property (nonatomic) GPBStringInt64Dictionary linkerMap;
@property (nonatomic) Q linkerMap_Count;
@property (nonatomic) NSString scrollConfig;
@property (nonatomic) q autoCover;
@property (nonatomic) q ranklistAudienceType;
@property (nonatomic) IESLiveSaaSPBImage coverGauss;
@property (nonatomic) BOOL hasCoverGauss;
@property (nonatomic) q linkmicLayout;
@property (nonatomic) q finishTime;
@property (nonatomic) NSInteger finishReason;
@property (nonatomic) IESLiveSaaSPBLinkerDetail linkerDetail;
@property (nonatomic) BOOL hasLinkerDetail;
@property (nonatomic) IESLiveSaaSPBAnchorABMap anchorAbmap;
@property (nonatomic) BOOL hasAnchorAbmap;
@property (nonatomic) NSString stamps;
@property (nonatomic) BOOL titleRecommend;
@property (nonatomic) q liveRoomMode;
@property (nonatomic) BOOL isOfficialChannelRoom;
@property (nonatomic) NSString officialChannelOpenId;
@property (nonatomic) q toutiaoCoverRecommendLevel;
@property (nonatomic) q toutiaoTitleRecommendLevel;
@property (nonatomic) q appId;
@property (nonatomic) IESLiveSaaSPBRoomExtra extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) NSString authCity;
@property (nonatomic) IESLiveSaaSPBUnionLiveInfo unionLiveInfo;
@property (nonatomic) BOOL hasUnionLiveInfo;
@property (nonatomic) BOOL liveTypeVsLive;
@property (nonatomic) BOOL liveTypeVsPremiere;
@property (nonatomic) NSString streamIdStr;
@property (nonatomic) q startTime;
@property (nonatomic) NSString screenCaptureSharingTitle;
@property (nonatomic) q vsMainReplayId;
@property (nonatomic) IESLiveSaaSPBCommentaryRoomInfo commentaryRoomInfo;
@property (nonatomic) BOOL hasCommentaryRoomInfo;
@property (nonatomic) NSMutableArray sharingMusicIdListArray;
@property (nonatomic) Q sharingMusicIdListArray_Count;
@property (nonatomic) q hasPromotionGames;
@property (nonatomic) NSString dynamicCoverUri;
@property (nonatomic) GPBInt64ObjectDictionary dynamicCoverDict;
@property (nonatomic) Q dynamicCoverDict_Count;
@property (nonatomic) q lastPingTime;
@property (nonatomic) q liveId;
@property (nonatomic) q streamProvider;
@property (nonatomic) BOOL enableRoomPerspective;
@property (nonatomic) IESLiveSaaSPBImage dynamicCoverLow;
@property (nonatomic) BOOL hasDynamicCoverLow;
@property (nonatomic) q cellStyle;
@property (nonatomic) NSString sunDailyIconContent;
@property (nonatomic) NSString distance;
@property (nonatomic) NSString distanceCity;
@property (nonatomic) NSString location;
@property (nonatomic) NSString realDistance;
@property (nonatomic) IESLiveSaaSPBImage feedRoomLabel;
@property (nonatomic) BOOL hasFeedRoomLabel;
@property (nonatomic) NSString commonLabelList;
@property (nonatomic) GPBInt64Array adminUserIdsArray;
@property (nonatomic) Q adminUserIdsArray_Count;
@property (nonatomic) NSString privateInfo;
@property (nonatomic) BOOL liveTypeNormal;
@property (nonatomic) BOOL liveTypeLinkmic;
@property (nonatomic) BOOL liveTypeSandbox;
@property (nonatomic) BOOL liveTypeOfficial;
@property (nonatomic) q groupId;
@property (nonatomic) q orientation;
@property (nonatomic) q category;
@property (nonatomic) GPBInt64Array tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) q popularity;
@property (nonatomic) NSString popularityStr;
@property (nonatomic) q fcdnAppid;
@property (nonatomic) BOOL sellGoods;
@property (nonatomic) q webCount;
@property (nonatomic) NSString verticalCoverUri;
@property (nonatomic) q baseCategory;
@property (nonatomic) BOOL isReplay;
@property (nonatomic) NSString vid;
@property (nonatomic) q groupSource;
@property (nonatomic) q lotteryFinishTime;
@property (nonatomic) IESLiveSaaSPBImage portraitCover;
@property (nonatomic) BOOL hasPortraitCover;
@property (nonatomic) BOOL isShowInquiryBall;
@property (nonatomic) NSString distanceKm;
@property (nonatomic) NSString forumExtraData;
@property (nonatomic) q bookTime;
@property (nonatomic) q bookEndTime;
@property (nonatomic) q roomAuditStatus;
@property (nonatomic) GPBInt64Array liveDistributionArray;
@property (nonatomic) Q liveDistributionArray_Count;
@property (nonatomic) BOOL replay;
@property (nonatomic) q searchId;
@property (nonatomic) q replayLocation;
@property (nonatomic) q streamCloseTime;
@property (nonatomic) q webcastCommentTcs;
@property (nonatomic) q roomTag;
@property (nonatomic) NSString relationTag;
@property (nonatomic) q ownerDeviceId;
@property (nonatomic) q webcastSdkVersion;
@property (nonatomic) q commentNameMode;
@property (nonatomic) NSString roomCreateAbParam;
@property (nonatomic) q preEnterTime;
@property (nonatomic) q previewFlowTag;
@property (nonatomic) IESLiveSaaSPBImage previewTagURL;
@property (nonatomic) BOOL hasPreviewTagURL;
@property (nonatomic) IESLiveSaaSPBImage cityTopBackground;
@property (nonatomic) BOOL hasCityTopBackground;
@property (nonatomic) NSString cityTopDistance;
@property (nonatomic) BOOL highlight;
@property (nonatomic) GPBInt64Array fansGroupAdminUserIdsArray;
@property (nonatomic) Q fansGroupAdminUserIdsArray_Count;
@property (nonatomic) NSString livePlatformSource;
@property (nonatomic) q acquaintanceStatus;
@property (nonatomic) GPBEnumArray vsRolesArray;
@property (nonatomic) Q vsRolesArray_Count;
@property (nonatomic) NSString itemExplicitInfo;
@property (nonatomic) q sofaLayout;
@property (nonatomic) BOOL isNeedCheckList;
@property (nonatomic) NSInteger visibilityRange;
@property (nonatomic) NSInteger gameRoomType;
@property (nonatomic) q danmakuDetail;
@property (nonatomic) IESLiveSaaSPBImage screenshotSover;
@property (nonatomic) BOOL hasScreenshotSover;
@property (nonatomic) BOOL withAggregateColumn;
@property (nonatomic) q redpacketAudienceAuth;
@property (nonatomic) IESLiveSaaSPBStreamUrl pushStreamHkt;
@property (nonatomic) BOOL hasPushStreamHkt;
@property (nonatomic) NSMutableArray upperRightWidgetDataListArray;
@property (nonatomic) Q upperRightWidgetDataListArray_Count;
+ (id)descriptor;
@end
