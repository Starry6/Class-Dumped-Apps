@interface AWEMVTemplateModel : NSObject
@property (nonatomic) <ACCMusicModelProtocol> musicModel;
@property (nonatomic) <ACCMusicModelProtocol> presentedMusicModel;
@property (nonatomic) NSMutableDictionary mvChallengeArrayDict;
@property (nonatomic) NSArray templateModels;
@property (nonatomic) NSArray urlPrefix;
@property (nonatomic) NSMutableDictionary effectModelTemplateInfos;
@property (nonatomic) NSMutableDictionary downloadingProgress;
@property (nonatomic) NSArray categories;
@property (nonatomic) IESCategoryEffectsModel categoryEffects;
@property (nonatomic) q loadCursor;
@property (nonatomic) q sortingPosition;
@property (nonatomic) BOOL isLoadingData;
@property (nonatomic) BOOL didLoadedFirstPageData;
@property (nonatomic) IESEffectModel sameMVModel;
@property (nonatomic) IESEffectModel singlePhotoToVideoModel;
@property (nonatomic) IESEffectModel multiplePhotoToVideoModel;
@property (nonatomic) IESEffectModel multiplePhotoToVideoSaveModel;
@property (nonatomic) IESEffectModel textPhotoToVideoModel;
@property (nonatomic) IESEffectModel feedPhotoToVideoModel;
@property (nonatomic) NSArray musicList;
@property (nonatomic) <ACCMusicModelProtocol> musicModel;
@property (nonatomic) <ACCMusicModelProtocol> presentedMusicModel;
@property (nonatomic) <ACCMusicModelProtocol> lastMusicModel;
@property (nonatomic) <ACCMusicModelProtocol> feedMusicModel;
@property (nonatomic) @? singlePhotoTemplateCompletion;
@property (nonatomic) @? multiplePhotoTemplateCompletion;
@property (nonatomic) @? multiplePhotoTemplateSaveCompletion;
@property (nonatomic) @? textTemplateCompletion;
@property (nonatomic) BOOL isSinglePhotoTemplateDownloading;
@property (nonatomic) BOOL isMultiplePhotoTemplateDownloading;
@property (nonatomic) BOOL isTextPhotoTemplateDownloading;
@property (nonatomic) BOOL isMultiplePhotoTemplateSaveDownloading;
@property (nonatomic) BOOL isTemplateMusicDownloading;
@property (nonatomic) NSString feedPhotoTemplateDownloadingModelId;
@property (nonatomic) Q feedVideoPhotoCountType;
@property (nonatomic) AWEPhotoToVideoMonitorInfo photoToVideoMonitorInfo;
@property (nonatomic) <AWEMVTemplateModelDelegate> delegate;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSDictionary trackExtraDic;
- (id)musicModel;
- (void)setMusicModel:;
- (id)templateModels;
- (void)setTemplateModels:;
- (long long)sortingPosition;
- (void)setSortingPosition:;
- (id)categoryEffects;
- (void)setCategoryEffects:;
- (id)musicList;
- (void)setMusicList:;
- (id)feedMusicModel;
- (void)setFeedMusicModel:;
- (void)setTrackExtraDic:;
- (id)trackExtraDic;
- (void)p_reset;
- (void)setPresentedMusicModel:;
- (id)videoMusicModelWithType:;
- (long long)templateMaxMaterialForModel:;
- (long long)templatePicInputWidth:;
- (long long)templatePicInputHeight:;
- (void)asyncFetchTextToVideoTemplateWithCompletion:;
- (void)preFetchPhotoToVideoMusicWithRetryBlock:completionBlock:;
- (void)resetFeedPhotoCountType;
- (void)asyncFetchPhotoToVideoTemplateWithIsSinglePhoto:completion:;
- (void)asyncFetchPhotoToVideoSaveTemplateWithCompletion:;
- (id)defaultMusicForPhotoToVideoTemplate;
- (id)textToVideoMoniterInfoSucceeed:startTime:;
- (id)photoToVideoMoniterInfoSucceeed:isSinglePhoto:startTime:;
- (id)templatePicFillMode:;
- (id)effectForPublishModel:;
- (id)mvChallengeArrayDict;
- (void)downloadMaterialWithEffectId:completion:;
- (long long)templateMinMaterialForModel:;
- (long long)templateTypeForModel:;
- (void)prefetchCachedPhotoToVideoTemplates;
- (void)preFetchPhotoToVideoMusicList;
- (void)addMVChallengeArray:mvEffectId:;
- (void)prefetchMVTemplateForSlideShowMVId:photoCountType:;
- (void)prefetchPhotoToVideoTemplates;
- (void)preFetchPhotoToVideoFeedMusicWithMusicId:;
- (void)setUrlPrefix:;
- (void)updateTemplateModels:;
- (void)setDownloadingProgress:;
- (id)presentedMusicModel;
- (void)preFetchPhotoToVideoMusicWithRetryBlock:isCommercialScene:params:completionBlock:;
- (void)fetchPhotoToVideoMusicInTimeWithRetryBlock:isCommercialScene:params:completionBlock:;
- (void)downloadMaterialForModel:;
- (void)checkAndUpdatePhotoMovieTemplate;
- (void)prefetchTextToVideoTemplates;
- (void)preFetchPhotoToVideoMusicListWithType:params:;
- (void)setDidLoadedFirstPageData:;
- (void)setLoadCursor:;
- (id)sameMVModel;
- (id)templateModelWithEffectId:;
- (id)singlePhotoToVideoModel;
- (id)multiplePhotoToVideoModel;
- (id)feedPhotoToVideoModel;
- (id)textPhotoToVideoModel;
- (void)reloadDataFromCache;
- (id)effectModelTemplateInfos;
- (id)templateInfoForModel:;
- (void)setSameMVModel:;
- (void)p_updatePageInfo:isLoadMore:;
- (void)setUpPlaceholderData;
- (id)templateVideoCoverURLForModel:;
- (id)templatePictureCoverURLForModel:;
- (id)downloadProgressForModel:;
- (void)p_makeMVModelFirst:;
- (void)setMvChallengeArrayDict:;
- (void)setEffectModelTemplateInfos:;
- (long long)loadCursor;
- (BOOL)didLoadedFirstPageData;
- (void)setSinglePhotoToVideoModel:;
- (void)setMultiplePhotoToVideoModel:;
- (id)multiplePhotoToVideoSaveModel;
- (void)setMultiplePhotoToVideoSaveModel:;
- (void)setTextPhotoToVideoModel:;
- (void)setFeedPhotoToVideoModel:;
- (id)lastMusicModel;
- (void)setLastMusicModel:;
- (id)singlePhotoTemplateCompletion;
- (void)setSinglePhotoTemplateCompletion:;
- (id)multiplePhotoTemplateCompletion;
- (void)setMultiplePhotoTemplateCompletion:;
- (id)multiplePhotoTemplateSaveCompletion;
- (void)setMultiplePhotoTemplateSaveCompletion:;
- (id)textTemplateCompletion;
- (void)setTextTemplateCompletion:;
- (BOOL)isSinglePhotoTemplateDownloading;
- (void)setIsSinglePhotoTemplateDownloading:;
- (BOOL)isMultiplePhotoTemplateDownloading;
- (void)setIsMultiplePhotoTemplateDownloading:;
- (BOOL)isTextPhotoTemplateDownloading;
- (void)setIsTextPhotoTemplateDownloading:;
- (BOOL)isMultiplePhotoTemplateSaveDownloading;
- (void)setIsMultiplePhotoTemplateSaveDownloading:;
- (BOOL)isTemplateMusicDownloading;
- (void)setIsTemplateMusicDownloading:;
- (id)feedPhotoTemplateDownloadingModelId;
- (void)setFeedPhotoTemplateDownloadingModelId:;
- (unsigned long long)feedVideoPhotoCountType;
- (void)setFeedVideoPhotoCountType:;
- (id)photoToVideoMonitorInfo;
- (id)photoToVideoMonitorInfo;
- (void)setPhotoToVideoMonitorInfo:;
- (void)prefetchMVTemplatesForPanel:;
- (BOOL)support1080P;
- (void)finishCompletion;
- (id)chooseEffectModelFrom:;
- (void)updatePhotoVideoModel:forPanel:;
- (void)finishPhotoToVideoTemplateDownloadFor:;
- (void)downloadMaterialWithEffect:completion:;
- (BOOL)enableUseMusicWithMusic:;
- (BOOL)finishCompletionForSameModel;
- (void)preFetchPhotoToVideoMusicListWithType:;
- (BOOL)enablePreFetchPhotoToVideoMusicListWithType:;
- (void)preFetchPhotoToVideoMusicList:;
- (void)preFetchPhotoToVideoMusicWithRetryBlock:;
- (void)saveRequestDuration:infoDuration:;
- (void)prefetchPhotoToVideoSaveTemplates;
- (id)photoToVideoTemplateWithIsSinglePhoto:;
- (id)photoToVideoMoniterInfoSucceeed:isSinglePhoto:isTextMode:startTime:;
- (id)timeDiffForStart:end:;
- (void)cleanPhotoToVideoMusic;
- (id)feedVideoMusicModelForType:;
- (void)setCategories:;
- (id)init;
- (id)categories;
- (id)delegate;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)downloadingProgress;
- (BOOL)isLoadingData;
- (void)setIsLoadingData:;
- (id)urlPrefix;
+ (void)addEffectModelToManagerIfNeeds:;
+ (id)sharedManager;
@end
