@interface HTSLiveUserPreviewConfig : NSObject
@property (nonatomic) Q source;
@property (nonatomic) q requestFrom;
@property (nonatomic) q targetDisplayRole;
@property (nonatomic) BOOL hasProfileStyle;
@property (nonatomic) q style;
@property (nonatomic) BOOL hasSmartSwitchVal;
@property (nonatomic) BOOL isOn;
@property (nonatomic) Q myRole;
@property (nonatomic) BOOL disableAdminButton;
@property (nonatomic) BOOL isPreviewAnchor;
@property (nonatomic) BOOL isInviting;
@property (nonatomic) BOOL disableInvite;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSDictionary eventParams;
@property (nonatomic) NSNumber reportContentID;
@property (nonatomic) NSString reportContent;
@property (nonatomic) BOOL isChatCommentMessage;
@property (nonatomic) NSDictionary reportDic;
@property (nonatomic) HTSLiveUser targetReportUser;
@property (nonatomic) NSDictionary reportUrlExtraParams;
@property (nonatomic) NSString sourceString;
@property (nonatomic) NSString reportType;
@property (nonatomic) NSString reportShowType;
@property (nonatomic) NSString reportRequestPage;
@property (nonatomic) NSString followPosition;
@property (nonatomic) NSNumber followScene;
@property (nonatomic) NSString clickUserPosition;
@property (nonatomic) NSString ksongUserType;
@property (nonatomic) NSString ksongToUserType;
@property (nonatomic) NSNumber order;
@property (nonatomic) BOOL fromFallback;
@property (nonatomic) BOOL showMask;
@property (nonatomic) BOOL isNotInRoom;
@property (nonatomic) @? onFollowStatusChange;
@property (nonatomic) UIView containerView;
@property (nonatomic) BOOL isOfficalMsg;
@property (nonatomic) BOOL isOtherLiveRoom;
@property (nonatomic) BOOL intercomHideUserCard;
@property (nonatomic) BOOL isStarComment;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) BOOL anonymousUseToast;
@property (nonatomic) HTSLiveUser anonymousUser;
@property (nonatomic) q onlyID;
@property (nonatomic) NSNumber publicScreenID;
@property (nonatomic) GPBMessage clickedMessage;
@property (nonatomic) NSString commentEnterPosition;
@property (nonatomic) NSDictionary vsCommentTrackParams;
@property (nonatomic) BOOL skipPrivacyCheck;
@property (nonatomic) NSDictionary followParams;
@property (nonatomic) UIColor userCardBackground;
@property (nonatomic) BOOL isMyLive;
- (BOOL)hasProfileStyle;
- (BOOL)isPreviewAnchor;
- (void)setEventParams:;
- (void)setFollowScene:;
- (void)setIsNotInRoom:;
- (BOOL)isOtherLiveRoom;
- (id)ksongToUserType;
- (id)reportContentID;
- (void)setEnterMethod:;
- (void)setRequestFrom:;
- (BOOL)anonymousUseToast;
- (id)anonymousUser;
- (id)clickUserPosition;
- (id)clickedMessage;
- (id)commentEnterPosition;
- (BOOL)disableAdminButton;
- (BOOL)disableInvite;
- (id)enterFrom;
- (id)enterMethod;
- (id)followParams;
- (id)followPosition;
- (id)followScene;
- (BOOL)fromFallback;
- (BOOL)hasSmartSwitchVal;
- (BOOL)intercomHideUserCard;
- (BOOL)isChatCommentMessage;
- (BOOL)isInviting;
- (BOOL)isMyLive;
- (BOOL)isNotInRoom;
- (BOOL)isOfficalMsg;
- (BOOL)isStarComment;
- (id)ksongUserType;
- (unsigned long long)myRole;
- (id)onFollowStatusChange;
- (long long)onlyID;
- (id)publicScreenID;
- (id)reportContent;
- (id)reportDic;
- (id)reportRequestPage;
- (id)reportShowType;
- (id)reportUrlExtraParams;
- (long long)requestFrom;
- (void)setAnonymousUseToast:;
- (void)setAnonymousUser:;
- (void)setClickUserPosition:;
- (void)setClickedMessage:;
- (void)setCommentEnterPosition:;
- (void)setDisableAdminButton:;
- (void)setDisableInvite:;
- (void)setEnterFrom:;
- (void)setFollowParams:;
- (void)setFollowPosition:;
- (void)setFromFallback:;
- (void)setHasProfileStyle:;
- (void)setHasSmartSwitchVal:;
- (void)setIntercomHideUserCard:;
- (void)setIsChatCommentMessage:;
- (void)setIsInviting:;
- (void)setIsMyLive:;
- (void)setIsOfficalMsg:;
- (void)setIsOtherLiveRoom:;
- (void)setIsPreviewAnchor:;
- (void)setIsStarComment:;
- (void)setKsongToUserType:;
- (void)setKsongUserType:;
- (void)setMyRole:;
- (void)setOnFollowStatusChange:;
- (void)setOnlyID:;
- (void)setPublicScreenID:;
- (void)setReportContent:;
- (void)setReportContentID:;
- (void)setReportDic:;
- (void)setReportUrlExtraParams:;
- (void)setShowMask:;
- (void)setSkipPrivacyCheck:;
- (void)setTargetDisplayRole:;
- (void)setTargetReportUser:;
- (void)setUserCardBackground:;
- (void)setVsCommentTrackParams:;
- (BOOL)showMask;
- (BOOL)skipPrivacyCheck;
- (long long)targetDisplayRole;
- (id)targetReportUser;
- (id)userCardBackground;
- (id)vsCommentTrackParams;
- (id)init;
- (void)setIsAnonymous:;
- (BOOL)isAnonymous;
- (BOOL)isOn;
- (id)containerView;
- (void)setContainerView:;
- (id)order;
- (void)setStyle:;
- (void).cxx_destruct;
- (unsigned long long)source;
- (id)reportType;
- (void)setOrder:;
- (long long)style;
- (void)setSource:;
- (id)sourceString;
- (void)setIsOn:;
- (id)eventParams;
@end
