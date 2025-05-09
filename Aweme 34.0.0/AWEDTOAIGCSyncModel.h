@interface AWEDTOAIGCSyncModel : MTLModel
@property (nonatomic) BOOL isSync;
@property (nonatomic) NSString propPath;
@property (nonatomic) NSString propIconPath;
@property (nonatomic) NSString propCoverPath;
@property (nonatomic) NSArray keywords;
@property (nonatomic) NSString currentPropIdentifier;
@property (nonatomic) NSString isSyncFrom;
@property (nonatomic) NSString fromPropId;
@property (nonatomic) NSString createWay;
@property (nonatomic) NSString fromMusicId;
@property (nonatomic) NSString effect;
@property (nonatomic) NSString originalImagePath;
@property (nonatomic) BOOL isEditPageSelectOriginalPublish;
@property (nonatomic) NSString renderImagePath;
@property (nonatomic) NSString aigcOriginalimagePath;
@property (nonatomic) NSString trackAigcsyncEnterFrom;
@property (nonatomic) BOOL saveLocalVideo;
@property (nonatomic) NSArray slotStatus;
@property (nonatomic) NSString aiType;
@property (nonatomic) NSString aiSuiteType;
@property (nonatomic) NSString aiSuitePanelKey;
@property (nonatomic) NSString aiSuiteCategoryKey;
@property (nonatomic) NSArray aiSuiteMusicids;
@property (nonatomic) NSArray aiSuiteChallengeIDs;
@property (nonatomic) BOOL isAiSuite;
@property (nonatomic) NSArray aiSuiteCommonInfo;
@property (nonatomic) NSArray aiSuiteEffectnames;
@property (nonatomic) NSString aiSuiteRealEffectid;
@property (nonatomic) NSString aiSuiteRealEffect;
@property (nonatomic) q aiCreationMaxCount;
@property (nonatomic) q aiCreationPreloadCount;
@property (nonatomic) q selectAigcEffectSource;
@property (nonatomic) NSString asyncqueueRenderimageLocalpath;
@property (nonatomic) NSString asyncqueueRenderimageDownloadpath;
@property (nonatomic) NSString asyncqueueMarkCurrentProjectuuid;
@property (nonatomic) q asyncqueueStatus;
@property (nonatomic) NSArray multiStyleEffectList;
@property (nonatomic) q currentIndex;
@property (nonatomic) NSDictionary selectIndexWithKeywords;
@property (nonatomic) NSString aiEffectFromPanel;
@property (nonatomic) NSArray generatedRawImagePaths;
@property (nonatomic) BOOL isAiTextToImage;
@property (nonatomic) NSString inputTextJson;
@property (nonatomic) q isInLoraNoticeClick;
@property (nonatomic) NSString aigcPassThroughInfo;
@property (nonatomic) NSString textToImageStickerId;
@property (nonatomic) BOOL textToImageNewAnchor;
@property (nonatomic) q lastSuccessIndex;
@property (nonatomic) AWEDTOAIGCLoadStatusModel lastSuccessSlotStatus;
@property (nonatomic) BOOL isSaveOriginCoverImage;
@property (nonatomic) BOOL hasAiEraser;
@property (nonatomic) NSString aiEraserOriginImagePath;
@property (nonatomic) NSString aiEraserUsedType;
@property (nonatomic) BOOL shouldDisableAiExpand;
@property (nonatomic) NSString aigcType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aigcType;
- (void)setIsSync:;
- (id)propPath;
- (void)setPropPath:;
- (id)propIconPath;
- (void)setPropIconPath:;
- (id)propCoverPath;
- (void)setPropCoverPath:;
- (id)currentPropIdentifier;
- (void)setCurrentPropIdentifier:;
- (id)isSyncFrom;
- (void)setIsSyncFrom:;
- (id)fromPropId;
- (void)setFromPropId:;
- (id)createWay;
- (void)setCreateWay:;
- (id)fromMusicId;
- (void)setFromMusicId:;
- (id)originalImagePath;
- (void)setOriginalImagePath:;
- (BOOL)isEditPageSelectOriginalPublish;
- (void)setIsEditPageSelectOriginalPublish:;
- (id)renderImagePath;
- (void)setRenderImagePath:;
- (id)aigcOriginalimagePath;
- (void)setAigcOriginalimagePath:;
- (id)trackAigcsyncEnterFrom;
- (void)setTrackAigcsyncEnterFrom:;
- (BOOL)saveLocalVideo;
- (void)setSaveLocalVideo:;
- (id)slotStatus;
- (void)setSlotStatus:;
- (id)aiType;
- (void)setAiType:;
- (id)aiSuiteType;
- (void)setAiSuiteType:;
- (id)aiSuitePanelKey;
- (void)setAiSuitePanelKey:;
- (id)aiSuiteCategoryKey;
- (void)setAiSuiteCategoryKey:;
- (id)aiSuiteMusicids;
- (void)setAiSuiteMusicids:;
- (id)aiSuiteChallengeIDs;
- (void)setAiSuiteChallengeIDs:;
- (BOOL)isAiSuite;
- (void)setIsAiSuite:;
- (id)aiSuiteCommonInfo;
- (void)setAiSuiteCommonInfo:;
- (id)aiSuiteEffectnames;
- (void)setAiSuiteEffectnames:;
- (id)aiSuiteRealEffectid;
- (void)setAiSuiteRealEffectid:;
- (id)aiSuiteRealEffect;
- (void)setAiSuiteRealEffect:;
- (long long)aiCreationMaxCount;
- (void)setAiCreationMaxCount:;
- (long long)aiCreationPreloadCount;
- (void)setAiCreationPreloadCount:;
- (long long)selectAigcEffectSource;
- (void)setSelectAigcEffectSource:;
- (id)asyncqueueRenderimageLocalpath;
- (void)setAsyncqueueRenderimageLocalpath:;
- (id)asyncqueueRenderimageDownloadpath;
- (void)setAsyncqueueRenderimageDownloadpath:;
- (id)asyncqueueMarkCurrentProjectuuid;
- (void)setAsyncqueueMarkCurrentProjectuuid:;
- (long long)asyncqueueStatus;
- (void)setAsyncqueueStatus:;
- (id)multiStyleEffectList;
- (void)setMultiStyleEffectList:;
- (id)selectIndexWithKeywords;
- (void)setSelectIndexWithKeywords:;
- (id)aiEffectFromPanel;
- (void)setAiEffectFromPanel:;
- (id)generatedRawImagePaths;
- (void)setGeneratedRawImagePaths:;
- (BOOL)isAiTextToImage;
- (void)setIsAiTextToImage:;
- (id)inputTextJson;
- (void)setInputTextJson:;
- (long long)isInLoraNoticeClick;
- (void)setIsInLoraNoticeClick:;
- (id)aigcPassThroughInfo;
- (void)setAigcPassThroughInfo:;
- (id)textToImageStickerId;
- (void)setTextToImageStickerId:;
- (BOOL)textToImageNewAnchor;
- (void)setTextToImageNewAnchor:;
- (long long)lastSuccessIndex;
- (void)setLastSuccessIndex:;
- (id)lastSuccessSlotStatus;
- (void)setLastSuccessSlotStatus:;
- (BOOL)isSaveOriginCoverImage;
- (void)setIsSaveOriginCoverImage:;
- (BOOL)hasAiEraser;
- (void)setHasAiEraser:;
- (id)aiEraserOriginImagePath;
- (void)setAiEraserOriginImagePath:;
- (id)aiEraserUsedType;
- (void)setAiEraserUsedType:;
- (BOOL)shouldDisableAiExpand;
- (void)setShouldDisableAiExpand:;
- (void)setAigcType:;
- (id)keywords;
- (void)setCurrentIndex:;
- (id)effect;
- (BOOL)isSync;
- (void)setKeywords:;
- (void).cxx_destruct;
- (void)setEffect:;
- (long long)currentIndex;
+ (id)slotStatusJSONTransformer;
+ (id)lastSuccessSlotStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
