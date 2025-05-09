@interface AWERepoContextModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isInfini;
@property (nonatomic) BOOL isMultiEditor;
@property (nonatomic) NSString createVersion;
@property (nonatomic) NSString createId;
@property (nonatomic) NSString uuid;
@property (nonatomic) BOOL isCombinedNle;
@property (nonatomic) BOOL isCoverEditNle;
@property (nonatomic) q videoCoverType;
@property (nonatomic) NSNumber captureCurrentFrameDone;
@property (nonatomic) q videoSource;
@property (nonatomic) q videoType;
@property (nonatomic) q videoRecordType;
@property (nonatomic) BOOL isMVVideo;
@property (nonatomic) BOOL classicalMVOffline;
@property (nonatomic) q feedType;
@property (nonatomic) BOOL didReleaseFeedPlayer;
@property (nonatomic) double maxDuration;
@property (nonatomic) q videoLenthMode;
@property (nonatomic) q recordSourceFrom;
@property (nonatomic) q photoToVideoPhotoCountType;
@property (nonatomic) AWEVideoPublishViewModel sourceModel;
@property (nonatomic) BOOL hideRecordUploadButton;
@property (nonatomic) BOOL allowSkipUpload;
@property (nonatomic) NSString remoteVideoResourceId;
@property (nonatomic) NSString sharedVideoResourceId;
@property (nonatomic) BOOL isShareAsStoryNoCompile;
@property (nonatomic) NSString remoteVideoScene;
@property (nonatomic) BOOL isRemoteVidReused;
@property (nonatomic) BOOL disablePreUploadInEditPage;
@property (nonatomic) BOOL isKaraokeAudio;
@property (nonatomic) BOOL isKaraokeOfficialBGVideo;
@property (nonatomic) BOOL isEnterSelectMusicVC;
@property (nonatomic) BOOL isImageAlbumOnly;
@property (nonatomic) BOOL isReedit;
@property (nonatomic) q reeditType;
@property (nonatomic) NSObject<ACCAwemeModelProtocol> aweme;
@property (nonatomic) NSData awemeData;
@property (nonatomic) BOOL reeditUsingDraft;
@property (nonatomic) BOOL isPrivateDailyType;
@property (nonatomic) BOOL enableOptimizedRatioMask;
@property (nonatomic) BOOL disableCommitAndRender;
@property (nonatomic) BOOL needImportOriginResolution;
@property (nonatomic) BOOL isFromMomentFeed;
@property (nonatomic) q editPageBottomButtonStyle;
@property (nonatomic) q startCaptureFrom;
@property (nonatomic) q nowStartCaptureFrom;
@property (nonatomic) BOOL cfVersionForNewMoment;
@property (nonatomic) NSString momentText;
@property (nonatomic) NSString audioAverageWaveArrString;
@property (nonatomic) BOOL isMomentLivePhoto;
@property (nonatomic) NSString beforeNowShootWatchedMasks;
@property (nonatomic) BOOL isLive;
@property (nonatomic) BOOL isTriggeredByVolumeButton;
@property (nonatomic) BOOL isQuickStoryPictureVideoType;
@property (nonatomic) BOOL isSystemLivePhoto;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isIMRecord;
@property (nonatomic) BOOL isMainRecorder;
@property (nonatomic) BOOL supportNewEditClip;
@property (nonatomic) BOOL newClipForMultiUploadVideos;
@property (nonatomic) BOOL isStoryVideoRecordingMode;
@property (nonatomic) BOOL enterFromShoot;
@property (nonatomic) BOOL appearedMoreThanOne;
@property (nonatomic) BOOL needShowMusicOfflineAlert;
@property (nonatomic) BOOL triggerChangeOfflineMusic;
@property (nonatomic) BOOL isStickerEdited;
@property (nonatomic) BOOL isRecord;
@property (nonatomic) BOOL isPhoto;
@property (nonatomic) BOOL hasPhoto;
@property (nonatomic) BOOL isGeneratingProjects;
@property (nonatomic) BOOL isEnterpriseAnchor;
@property (nonatomic) BOOL isCloseMP;
@property (nonatomic) BOOL noLandingAfterPublish;
@property (nonatomic) NSDictionary runtimeExportedLocalImageFilePaths;
@property (nonatomic) NSDictionary runtimeExportedLocalVideoFilePaths;
@property (nonatomic) NSArray runtimeExportedLivePhotoIndexes;
@property (nonatomic) NSDictionary runtimeExportedLivePhotoImagePositions;
@property (nonatomic) NSArray selectdSaveAlbumImageIndexs;
@property (nonatomic) NSDictionary runtimeSaveAsImageDict;
@property (nonatomic) NSDictionary forceSaveAlbumImageAsImage;
@property (nonatomic) BOOL saveAlbumVideoWaterMark;
@property (nonatomic) AWEUserModel customerWatermarkAuthorInfo;
@property (nonatomic) BOOL saveImageAlbumAsVideo;
@property (nonatomic) BOOL isSaveDraftToNewDraftBoxPage;
@property (nonatomic) BOOL isFromCommentPanel;
@property (nonatomic) BOOL isFromImageCommentPublish;
@property (nonatomic) NSString imageCommentPublishCommentID;
@property (nonatomic) PHAsset shareImageAsset;
@property (nonatomic) BOOL propTabLandingRedPacket;
@property (nonatomic) BOOL quickSaveAlbum;
@property (nonatomic) BOOL isSaveToAlbumSourceClip;
@property (nonatomic) BOOL shareToImForMultiProjects;
@property (nonatomic) BOOL hasAwemeContent;
@property (nonatomic) BOOL onlyThemes;
@property (nonatomic) BOOL isAllLocalImage;
@property (nonatomic) BOOL isFlashBack;
@property (nonatomic) NSString flashBackScene;
@property (nonatomic) NSString memoriesEnterMethod;
@property (nonatomic) BOOL hasFlashBackAuthorization;
@property (nonatomic) q flashBackPicCnt;
@property (nonatomic) q flashBackVideoCnt;
@property (nonatomic) BOOL hasSpecificContent;
@property (nonatomic) BOOL NotNeedCameraAuth;
@property (nonatomic) BOOL NotNeedMicroAuth;
@property (nonatomic) BOOL isSilentMergeMode;
@property (nonatomic) BOOL enableTakePictureOpt;
@property (nonatomic) q videoAwemeType;
@property (nonatomic) q imageAwemeType;
@property (nonatomic) BOOL editAutoJumpToPost;
@property (nonatomic) q recordOrientation;
@property (nonatomic) q trackerDeviceOrientation;
@property (nonatomic) NSNumber activityVideoType;
@property (nonatomic) NSString activityTaskToken;
@property (nonatomic) q exclusiveVideoType;
@property (nonatomic) BOOL liteActivityRedPacketType;
@property (nonatomic) NSString liteRedPacketTaskKey;
@property (nonatomic) q effectMessageTaskId;
@property (nonatomic) BOOL isLiteRedPacketPropCategory;
@property (nonatomic) BOOL propPannelClicked;
@property (nonatomic) BOOL isPOIComment;
@property (nonatomic) BOOL isFromReEdit;
@property (nonatomic) BOOL imageFromShare;
@property (nonatomic) BOOL hasVideoMode;
@property (nonatomic) q latestVideoModeId;
@property (nonatomic) BOOL mergeDuringEdit;
@property (nonatomic) q isFriendsWatching;
@property (nonatomic) q cameraPresetDegradeType;
@property (nonatomic) NSArray bottomTabOnlyShow;
@property (nonatomic) NSString themeStickerId;
@property (nonatomic) BOOL karaokeDuetBackOperation;
@property (nonatomic) NSString answerToQuestionAwemeId;
@property (nonatomic) q cameraPosition;
@property (nonatomic) ACCSequencePreviewImageCache multiImageCache;
@property (nonatomic) ACCExtractAbilityManager extractManager;
@property (nonatomic) BOOL livePhotoSupportHotRefresh;
@property (nonatomic) BOOL isSlidesAllLivePhotos;
@property (nonatomic) BOOL enableEditAndPublishEditorParallel;
@property (nonatomic) BOOL enableSingleMultiUnify;
@property (nonatomic) BOOL isHandsFreeHolding;
@property (nonatomic) BOOL enterRecordFromEdit;
@property (nonatomic) BOOL enterRecordFromMomentFeed;
@property (nonatomic) BOOL enterMomentPublishFromAlbum;
@property (nonatomic) BOOL isSameClickPlus;
@property (nonatomic) BOOL useTakePhotoStream;
@property (nonatomic) BOOL isFromComposer;
@property (nonatomic) BOOL isPropAIAsync;
@property (nonatomic) q infiniInitialIndex;
@property (nonatomic) BOOL disableAutoPlay;
@property (nonatomic) BOOL saveAsInfini;
@property (nonatomic) BOOL useSlidesEditStyle;
@property (nonatomic) q enterCameraPreviousPage;
@property (nonatomic) BOOL isFeedVideoMergeTask;
@property (nonatomic) @? saveCurrentEditContextSnap;
@property (nonatomic) BOOL willOpenNewRecorder;
@property (nonatomic) BOOL isNewRecorderFromEdit;
@property (nonatomic) double activityVolume;
@property (nonatomic) BOOL isMultiImagesAutoPlay;
@property (nonatomic) BOOL isLivePhotoRemoveStaticFrame;
@property (nonatomic) NSString featureExtra;
@property (nonatomic) NSDictionary pictureIds;
@property (nonatomic) q textStickerCount;
@property (nonatomic) q infoStickerCount;
@property (nonatomic) NSDictionary countDownPictureTrackPramas;
@property (nonatomic) BOOL saveForLoraLivePhoto;
@property (nonatomic) BOOL useBeautyOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <ACCRepoDataContext> dataContext;
@property (nonatomic) <ACCWorkspaceReader> workspaceReader;
@property (nonatomic) <ACCPublishRepository> repoDeprecated;
- (id)aweme;
- (void)setAweme:;
- (void)setNoLandingAfterPublish:;
- (void)setEditPageBottomButtonStyle:;
- (void)setIsFromImageCommentPublish:;
- (void)setImageCommentPublishCommentID:;
- (BOOL)isFromImageCommentPublish;
- (BOOL)isReedit;
- (BOOL)isImageAlbumSlides;
- (id)dataContext;
- (id)createId;
- (id)activityVideoType;
- (void)setActivityVideoType:;
- (long long)editPageBottomButtonStyle;
- (id)activityTaskToken;
- (void)setActivityTaskToken:;
- (BOOL)imageFromShare;
- (void)setImageFromShare:;
- (BOOL)isFromComposer;
- (void)setIsFromComposer:;
- (BOOL)enableOptimizedRatioMask;
- (void)setEnableOptimizedRatioMask:;
- (BOOL)saveAsInfini;
- (void)setSaveAsInfini:;
- (BOOL)isMultiEditor;
- (void)setIsMultiEditor:;
- (BOOL)livePhotoSupportHotRefresh;
- (void)setLivePhotoSupportHotRefresh:;
- (double)activityVolume;
- (void)setActivityVolume:;
- (BOOL)isMultiImagesAutoPlay;
- (void)setIsMultiImagesAutoPlay:;
- (BOOL)isLivePhotoRemoveStaticFrame;
- (void)setIsLivePhotoRemoveStaticFrame:;
- (long long)reeditType;
- (void)setReeditType:;
- (id)pictureIds;
- (void)setPictureIds:;
- (void)setAwemeData:;
- (id)awemeData;
- (BOOL)noLandingAfterPublish;
- (id)repoDeprecated;
- (void)setRepoDeprecated:;
- (void)setDataContext:;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (BOOL)isFromCommentPanel;
- (id)momentText;
- (id)audioAverageWaveArrString;
- (void)setMomentText:;
- (BOOL)isMomentLivePhoto;
- (void)setAudioAverageWaveArrString:;
- (void)setIsMomentLivePhoto:;
- (void)setCfVersionForNewMoment:;
- (void)updateFromAweme:;
- (void)setCreateId:;
- (BOOL)isMixedSlides;
- (void)setIsReedit:;
- (BOOL)onlyThemes;
- (void)setOnlyThemes:;
- (long long)videoAwemeType;
- (void)setVideoAwemeType:;
- (long long)imageAwemeType;
- (void)setImageAwemeType:;
- (id)remoteVideoScene;
- (void)setRemoteVideoScene:;
- (id)remoteVideoResourceId;
- (void)setRemoteVideoResourceId:;
- (BOOL)isPrivateDailyType;
- (void)setIsPOIComment:;
- (id)multiImageCache;
- (long long)infoStickerCount;
- (void)setVideoRecordType:;
- (BOOL)editAutoJumpToPost;
- (BOOL)isQuickStoryPictureVideoType;
- (BOOL)enterFromShoot;
- (BOOL)isMVVideo;
- (BOOL)isFlashBack;
- (BOOL)isPOIComment;
- (void)setTextStickerCount:;
- (void)setInfoStickerCount:;
- (BOOL)isCloseMP;
- (id)saveCurrentEditContextSnap;
- (BOOL)isInfini;
- (void)setIsPrivateDailyType:;
- (BOOL)isClipVideoReedit;
- (void)setSelectdSaveAlbumImageIndexs:;
- (void)setSaveImageAlbumAsVideo:;
- (void)setQuickSaveAlbum:;
- (void)setIsSaveToAlbumSourceClip:;
- (long long)recordSourceFrom;
- (long long)recordOrientation;
- (void)setRecordOrientation:;
- (long long)trackerDeviceOrientation;
- (void)setTrackerDeviceOrientation:;
- (BOOL)isStickerEdited;
- (void)setIsStickerEdited:;
- (BOOL)supportNewEditClip;
- (long long)textStickerCount;
- (id)extractManager;
- (void)setExtractManager:;
- (BOOL)isIMRecord;
- (void)setIsInfini:;
- (void)setEnterCameraPreviousPage:;
- (void)setMultiImageCache:;
- (long long)startCaptureFrom;
- (void)setStartCaptureFrom:;
- (BOOL)isPropAIAsync;
- (BOOL)liteActivityRedPacketType;
- (void)setLiteActivityRedPacketType:;
- (id)liteRedPacketTaskKey;
- (void)setLiteRedPacketTaskKey:;
- (void)setIsFromCommentPanel:;
- (BOOL)allowSkipUpload;
- (void)setAllowSkipUpload:;
- (id)workspaceReader;
- (void)setWorkspaceReader:;
- (void)setNeedShowMusicOfflineAlert:;
- (BOOL)disablePreUploadInEditPage;
- (BOOL)isMainRecorder;
- (BOOL)NotNeedCameraAuth;
- (BOOL)NotNeedMicroAuth;
- (BOOL)isSystemLivePhoto;
- (id)trackerDeviceOrientationName;
- (void)draftWillBeSavedWithID:;
- (void)modelDidRetrievedFromDraftWithID:;
- (void)setEnableSingleMultiUnify:;
- (void)setIsSlidesAllLivePhotos:;
- (BOOL)enableSingleMultiUnify;
- (long long)videoLenthMode;
- (void)setVideoLenthMode:;
- (void)setAppearedMoreThanOne:;
- (BOOL)needAIClip;
- (void)setIsFromMomentFeed:;
- (void)setRecordSourceFrom:;
- (void)setIsFriendsWatching:;
- (void)setHideRecordUploadButton:;
- (void)setInfiniInitialIndex:;
- (BOOL)isFeedVideoMergeTask;
- (long long)photoToVideoPhotoCountType;
- (BOOL)shouldUseMVMusic;
- (BOOL)isKaraokeAudio;
- (void)setEnterFromShoot:;
- (void)setMergeDuringEdit:;
- (BOOL)disableCommitAndRender;
- (BOOL)saveImageAlbumAsVideo;
- (void)setIsPropAIAsync:;
- (id)flashBackScene;
- (id)imageCommentPublishCommentID;
- (void)setDisablePreUploadInEditPage:;
- (BOOL)isCoverEditNle;
- (long long)videoCoverType;
- (void)setIsCoverEditNle:;
- (BOOL)mergeDuringEdit;
- (BOOL)isRecord;
- (void)setMemoriesEnterMethod:;
- (void)setHasAwemeContent:;
- (void)setIsAllLocalImage:;
- (void)setIsFlashBack:;
- (void)setFlashBackScene:;
- (void)setHasFlashBackAuthorization:;
- (id)memoriesEnterMethod;
- (BOOL)hasAwemeContent;
- (void)setFlashBackPicCnt:;
- (void)setFlashBackVideoCnt:;
- (void)setHasSpecificContent:;
- (BOOL)isAllLocalImage;
- (void)setClassicalMVOffline:;
- (void)setVideoCoverType:;
- (void)setShareImageAsset:;
- (void)setUseBeautyOpt:;
- (BOOL)needShowMusicOfflineAlert;
- (BOOL)canChangeMusicInEditPage;
- (void)setTriggerChangeOfflineMusic:;
- (id)captureCurrentFrameDone;
- (BOOL)didReleaseFeedPlayer;
- (void)setDidReleaseFeedPlayer:;
- (void)setEnableEditAndPublishEditorParallel:;
- (BOOL)enableEditAndPublishEditorParallel;
- (void)setSaveCurrentEditContextSnap:;
- (void)setRuntimeSaveAsImageDict:;
- (id)selectdSaveAlbumImageIndexs;
- (BOOL)quickSaveAlbum;
- (id)runtimeExportedLocalImageFilePaths;
- (void)setRuntimeExportedLocalImageFilePaths:;
- (BOOL)isShareAsStoryNoCompile;
- (BOOL)isRemoteVidReused;
- (BOOL)hasSpecificContent;
- (BOOL)isEnterpriseAnchor;
- (void)setShareToImForMultiProjects:;
- (BOOL)shareToImForMultiProjects;
- (id)runtimeSaveAsImageDict;
- (id)forceSaveAlbumImageAsImage;
- (id)customerWatermarkAuthorInfo;
- (void)setCustomerWatermarkAuthorInfo:;
- (BOOL)saveAlbumVideoWaterMark;
- (void)setRuntimeExportedLocalVideoFilePaths:;
- (void)setRuntimeExportedLivePhotoIndexes:;
- (BOOL)isCombinedNle;
- (void)setIsRemoteVidReused:;
- (BOOL)isSaveToAlbumSourceClip;
- (void)setIsFeedVideoMergeTask:;
- (void)setSaveAlbumVideoWaterMark:;
- (void)setRuntimeExportedLivePhotoImagePositions:;
- (BOOL)saveForLoraLivePhoto;
- (void)setSaveForLoraLivePhoto:;
- (id)runtimeExportedLivePhotoIndexes;
- (id)runtimeExportedLocalVideoFilePaths;
- (id)runtimeExportedLivePhotoImagePositions;
- (id)acc_publishTrackEventParams:;
- (BOOL)hasFlashBackAuthorization;
- (long long)flashBackVideoCnt;
- (long long)flashBackPicCnt;
- (void)setDisableCommitAndRender:;
- (void)setSharedVideoResourceId:;
- (void)setIsShareAsStoryNoCompile:;
- (void)setIsMainRecorder:;
- (long long)enterCameraPreviousPage;
- (void)setHasVideoMode:;
- (BOOL)isSameClickPlus;
- (void)setCreateVersion:;
- (void)setPhotoToVideoPhotoCountType:;
- (void)setCountDownPictureTrackPramas:;
- (void)setFeatureExtra:;
- (id)createVersion;
- (id)countDownPictureTrackPramas;
- (id)featureExtra;
- (void)setBottomTabOnlyShow:;
- (void)setIsSilentMergeMode:;
- (void)setIsCombinedNle:;
- (id)answerToQuestionAwemeId;
- (void)setIsCloseMP:;
- (void)setIsSameClickPlus:;
- (void)setAnswerToQuestionAwemeId:;
- (BOOL)cfVersionForNewMoment;
- (void)setNowStartCaptureFrom:;
- (void)setBeforeNowShootWatchedMasks:;
- (void)setIsNewRecorderFromEdit:;
- (void)setIsEnterpriseAnchor:;
- (BOOL)appearedMoreThanOne;
- (void)setUseSlidesEditStyle:;
- (BOOL)reeditUsingDraft;
- (void)setNotNeedCameraAuth:;
- (void)setNotNeedMicroAuth:;
- (void)setIsImageAlbumOnly:;
- (void)setReeditUsingDraft:;
- (void)setEditAutoJumpToPost:;
- (void)setIsFromReEdit:;
- (BOOL)useBeautyOpt;
- (long long)infiniPublishResultType;
- (long long)videoRecordType;
- (BOOL)needImportOriginResolution;
- (void)setNeedImportOriginResolution:;
- (BOOL)isEnterSelectMusicVC;
- (BOOL)isSilentMergeMode;
- (BOOL)willOpenNewRecorder;
- (long long)cameraPresetDegradeType;
- (void)setCameraPresetDegradeType:;
- (long long)isFriendsWatching;
- (BOOL)useSlidesEditStyle;
- (long long)infiniInitialIndex;
- (BOOL)enableTakePictureOpt;
- (BOOL)isTriggeredByVolumeButton;
- (void)setIsHandsFreeHolding:;
- (BOOL)hasLivePhotoClip;
- (BOOL)enterRecordFromEdit;
- (BOOL)isLitePropEnterMethod;
- (void)setForceSaveAlbumImageAsImage:;
- (BOOL)hasVideoMode;
- (void)setLatestVideoModeId:;
- (long long)latestVideoModeId;
- (void)setWillOpenNewRecorder:;
- (void)setUseTakePhotoStream:;
- (void)setIsTriggeredByVolumeButton:;
- (void)setEnterRecordFromEdit:;
- (BOOL)useTakePhotoStream;
- (BOOL)isHandsFreeHolding;
- (id)lengthModeTrackString;
- (BOOL)enterMomentPublishFromAlbum;
- (BOOL)enterRecordFromMomentFeed;
- (void)setEnterRecordFromMomentFeed:;
- (BOOL)hideRecordUploadButton;
- (BOOL)isKaraokeOfficialBGVideo;
- (void)setIsGeneratingProjects:;
- (void)setCaptureCurrentFrameDone:;
- (id)singlePhotoCountDownTrackData;
- (BOOL)isGeneratingProjects;
- (BOOL)triggerChangeOfflineMusic;
- (BOOL)newClipForMultiUploadVideos;
- (void)setIsEnterSelectMusicVC:;
- (BOOL)isClassicalMVOffline;
- (id)shareImageAsset;
- (BOOL)isFromMomentFeed;
- (BOOL)isFromReEdit;
- (id)bottomTabOnlyShow;
- (id)themeStickerId;
- (void)setThemeStickerId:;
- (BOOL)karaokeDuetBackOperation;
- (void)setKaraokeDuetBackOperation:;
- (BOOL)isSlidesAllLivePhotos;
- (void)setEnterMomentPublishFromAlbum:;
- (BOOL)isNewRecorderFromEdit;
- (id)sharedVideoResourceId;
- (BOOL)isLiteRedPacketPropCategory;
- (BOOL)propPannelClicked;
- (BOOL)isTC21RedPackageActivity;
- (BOOL)isImageAlbumOnly;
- (long long)nowStartCaptureFrom;
- (id)beforeNowShootWatchedMasks;
- (BOOL)isStoryVideoRecordingMode;
- (void)setIsStoryVideoRecordingMode:;
- (BOOL)isSaveDraftToNewDraftBoxPage;
- (void)setIsSaveDraftToNewDraftBoxPage:;
- (BOOL)propTabLandingRedPacket;
- (void)setPropTabLandingRedPacket:;
- (long long)exclusiveVideoType;
- (void)setExclusiveVideoType:;
- (long long)effectMessageTaskId;
- (void)setEffectMessageTaskId:;
- (void)setIsLiteRedPacketPropCategory:;
- (void)setPropPannelClicked:;
- (long long)feedType;
- (id)init;
- (long long)cameraPosition;
- (id)uuid;
- (long long)imageCount;
- (void)setUuid:;
- (BOOL)disableAutoPlay;
- (long long)videoType;
- (void)setFeedType:;
- (void).cxx_destruct;
- (BOOL)isLivePhoto;
- (void)setVideoType:;
- (BOOL)isLive;
- (void)setDisableAutoPlay:;
- (id)copyWithZone:;
- (BOOL)hasPhoto;
- (id)sourceModel;
- (double)maxDuration;
- (BOOL)isPhoto;
- (long long)livePhotoCount;
- (long long)videoCount;
- (void)setMaxDuration:;
- (void)setVideoSource:;
- (long long)videoSource;
- (void)setCameraPosition:;
- (void)setSourceModel:;
+ (id)repo_dataProtocol;
@end
