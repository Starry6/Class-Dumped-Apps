@interface AWEOpenShareResp : BDPlatformSDKBaseResp
@property (nonatomic) Q landingPageType;
@property (nonatomic) NSString localShareID;
@property (nonatomic) BOOL isNewShareProcess;
@property (nonatomic) BOOL useNewShareAbility;
@property (nonatomic) BOOL useNewPublishAbility;
@property (nonatomic) Q mediaType;
@property (nonatomic) NSArray resourceArray;
@property (nonatomic) NSArray mediaLocationsArray;
@property (nonatomic) NSArray mediaResources;
@property (nonatomic) NSArray videoLocalURLArray;
@property (nonatomic) NSArray imageLocalURLArray;
@property (nonatomic) NSArray systemLocalURLArray;
@property (nonatomic) NSArray systemLocalURLTypeArray;
@property (nonatomic) NSString hashtag;
@property (nonatomic) BOOL hashtagSticker;
@property (nonatomic) q shareState;
@property (nonatomic) Q shareAction;
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString thirdAppName;
@property (nonatomic) NSString thirdAppKey;
@property (nonatomic) NSString thirdIconImageURL;
@property (nonatomic) AWEOpenAnchorModel anchor;
@property (nonatomic) AWEOpenShareIronMan ironMan;
@property (nonatomic) NSString shareStartTimestamp;
@property (nonatomic) NSString launchTimeStamp;
@property (nonatomic) NSString musicId;
@property (nonatomic) NSNumber musicStartTime;
@property (nonatomic) BOOL savedAsDraft;
@property (nonatomic) BOOL publishStory;
@property (nonatomic) Q dailyContentType;
@property (nonatomic) AWEOpenBackgroundModel backgroundModel;
@property (nonatomic) BOOL isImageAlbumMode;
@property (nonatomic) NSString shareH5Path;
@property (nonatomic) NSString productExtraJsonStr;
@property (nonatomic) NSString gameID;
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString cardType;
@property (nonatomic) NSNumber customMaxVideoCount;
@property (nonatomic) Q landedPageType;
@property (nonatomic) BOOL checkedValidResult;
@property (nonatomic) BOOL jumpBackToThird;
@property (nonatomic) BOOL needSignProtocol;
@property (nonatomic) NSString extraInvalidMsg;
@property (nonatomic) NSString openPlatformShareData;
@property (nonatomic) NSString liteJianyingRedPackJsonStr;
@property (nonatomic) AWEOpenShareTitle title;
@property (nonatomic) NSMutableArray imageStickers;
@property (nonatomic) NSMutableArray hashtagStickers;
@property (nonatomic) NSMutableArray mentionStickers;
@property (nonatomic) NSMutableArray poiStickers;
@property (nonatomic) NSMutableArray quickFlashStickers;
@property (nonatomic) NSString videoID;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEVideoModel videoModel;
@property (nonatomic) NSArray albumImages;
@property (nonatomic) NSString shareToastjumpURL;
@property (nonatomic) NSNumber dailyScale;
@property (nonatomic) NSString miniVersion;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiName;
@property (nonatomic) q privateStatus;
@property (nonatomic) q downloadType;
@property (nonatomic) NSString effectID;
@property (nonatomic) NSNumber coverFrameTimestamp;
@property (nonatomic) NSString coverFramePath;
@property (nonatomic) NSMutableDictionary shareMonitorDict;
@property (nonatomic) q pageType;
@property (nonatomic) q resultType;
@property (nonatomic) q openPlatformShareFrom;
@property (nonatomic) q openPlatformShareTo;
@property (nonatomic) APCDTOComposerApi apiModel;
@property (nonatomic) AWERepoShareModel repoShare;
@property (nonatomic) AWEStudioRepoOpenShareModel repoOpenShare;
@property (nonatomic) AWERepoMVModel repoMV;
@property (nonatomic) AWERepoCutSameModel repoCutSame;
@property (nonatomic) AWETaskModel taskModel;
@property (nonatomic) NSString referString;
@property (nonatomic) BOOL respReturnExtraInfoAddItemID;
@property (nonatomic) NSMutableDictionary respReturnExtraInfo;
@property (nonatomic) NSString state;
- (id)albumImages;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (long long)privateStatus;
- (void)setPrivateStatus:;
- (id)videoModel;
- (void)setVideoModel:;
- (void)setMusicId:;
- (id)ironMan;
- (id)musicId;
- (id)poiID;
- (id)poiName;
- (void)setAlbumImages:;
- (id)taskModel;
- (void)setTaskModel:;
- (id)mediaResources;
- (void)setMediaResources:;
- (void)setPoiName:;
- (void)setLandingPageType:;
- (unsigned long long)landingPageType;
- (void)setPoiID:;
- (id)musicStartTime;
- (void)setMusicStartTime:;
- (void)setApiModel:;
- (id)apiModel;
- (id)openId;
- (void)setOpenId:;
- (void)setIronMan:;
- (void)setEffectID:;
- (id)thirdAppName;
- (void)setThirdAppName:;
- (id)thirdAppKey;
- (void)setThirdAppKey:;
- (id)thirdIconImageURL;
- (void)setThirdIconImageURL:;
- (id)localShareID;
- (void)setLocalShareID:;
- (unsigned long long)shareAction;
- (void)setShareAction:;
- (id)resourceArray;
- (void)setResourceArray:;
- (void)setHashtag:;
- (id)hashtag;
- (void)setBackgroundModel:;
- (id)gameID;
- (void)setGameID:;
- (BOOL)publishStory;
- (id)repoShare;
- (void)setPublishStory:;
- (id)launchTimeStamp;
- (void)setLaunchTimeStamp:;
- (id)repoOpenShare;
- (id)shareStartTimestamp;
- (void)setShareStartTimestamp:;
- (unsigned long long)landedPageType;
- (BOOL)useNewShareAbility;
- (void)setUseNewShareAbility:;
- (BOOL)savedAsDraft;
- (id)productExtraJsonStr;
- (long long)openPlatformShareFrom;
- (id)shareMonitorDict;
- (id)hashtagStickers;
- (id)mentionStickers;
- (id)poiStickers;
- (id)quickFlashStickers;
- (void)configLandedPageType:;
- (id)ironManAnchor;
- (void)updateSharePageType;
- (void)updateShareResult;
- (double)shareDuration;
- (double)shareInAppDuration;
- (BOOL)useNewDailyContainer;
- (id)hashtagStickerConfigs;
- (id)mentionStickerConfigs;
- (id)poiStickerConfigs;
- (id)quickFlashStickerConfigs;
- (BOOL)isNewShareProcess;
- (void)setIsNewShareProcess:;
- (BOOL)useNewPublishAbility;
- (void)setUseNewPublishAbility:;
- (id)mediaLocationsArray;
- (void)setMediaLocationsArray:;
- (id)videoLocalURLArray;
- (void)setVideoLocalURLArray:;
- (id)imageLocalURLArray;
- (void)setImageLocalURLArray:;
- (id)systemLocalURLArray;
- (void)setSystemLocalURLArray:;
- (id)systemLocalURLTypeArray;
- (void)setSystemLocalURLTypeArray:;
- (BOOL)hashtagSticker;
- (void)setHashtagSticker:;
- (void)setSavedAsDraft:;
- (unsigned long long)dailyContentType;
- (void)setDailyContentType:;
- (BOOL)isImageAlbumMode;
- (void)setIsImageAlbumMode:;
- (id)shareH5Path;
- (void)setShareH5Path:;
- (void)setProductExtraJsonStr:;
- (id)customMaxVideoCount;
- (void)setCustomMaxVideoCount:;
- (BOOL)checkedValidResult;
- (void)setCheckedValidResult:;
- (BOOL)jumpBackToThird;
- (void)setJumpBackToThird:;
- (BOOL)needSignProtocol;
- (void)setNeedSignProtocol:;
- (id)extraInvalidMsg;
- (void)setExtraInvalidMsg:;
- (id)openPlatformShareData;
- (void)setOpenPlatformShareData:;
- (id)liteJianyingRedPackJsonStr;
- (void)setLiteJianyingRedPackJsonStr:;
- (id)imageStickers;
- (void)setImageStickers:;
- (void)setHashtagStickers:;
- (void)setMentionStickers:;
- (void)setPoiStickers:;
- (void)setQuickFlashStickers:;
- (id)shareToastjumpURL;
- (void)setShareToastjumpURL:;
- (id)dailyScale;
- (void)setDailyScale:;
- (id)miniVersion;
- (void)setMiniVersion:;
- (id)coverFrameTimestamp;
- (void)setCoverFrameTimestamp:;
- (id)coverFramePath;
- (void)setCoverFramePath:;
- (void)setShareMonitorDict:;
- (void)setOpenPlatformShareFrom:;
- (long long)openPlatformShareTo;
- (void)setOpenPlatformShareTo:;
- (void)setRepoShare:;
- (void)setRepoOpenShare:;
- (id)repoMV;
- (void)setRepoMV:;
- (id)repoCutSame;
- (void)setRepoCutSame:;
- (BOOL)respReturnExtraInfoAddItemID;
- (void)setRespReturnExtraInfoAddItemID:;
- (id)respReturnExtraInfo;
- (void)setRespReturnExtraInfo:;
- (void)setMediaType:;
- (id)anchor;
- (void)setAnchor:;
- (id)init;
- (id)bundleId;
- (void)setResultType:;
- (long long)downloadType;
- (void)setBundleId:;
- (unsigned long long)mediaType;
- (void)setDownloadType:;
- (id)state;
- (void)setPageType:;
- (long long)resultType;
- (double)launchDuration;
- (void).cxx_destruct;
- (id)title;
- (void)setState:;
- (void)setTitle:;
- (long long)pageType;
- (id)cardType;
- (void)setCardType:;
- (long long)shareState;
- (id)videoID;
- (void)setVideoID:;
- (id)extraInfo;
- (id)challengeID;
- (id)effectID;
- (void)setShareState:;
- (void)setChallengeID:;
- (id)backgroundModel;
- (id)launchMethod;
@end
