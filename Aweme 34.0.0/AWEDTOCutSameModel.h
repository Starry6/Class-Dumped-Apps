@interface AWEDTOCutSameModel : MTLModel
@property (nonatomic) NSArray editTexts;
@property (nonatomic) q templateType;
@property (nonatomic) NSString musicId;
@property (nonatomic) NSString cutSameId;
@property (nonatomic) NSArray srcVideoDataList;
@property (nonatomic) NSString concatFilePath;
@property (nonatomic) BOOL isH5;
@property (nonatomic) NSString openPlatformKey;
@property (nonatomic) NSString openPlatformShareId;
@property (nonatomic) BOOL isNleCutsame;
@property (nonatomic) NSArray challengeIdList;
@property (nonatomic) NSArray challengeNameList;
@property (nonatomic) double originVoiceVolume;
@property (nonatomic) q templateSource;
@property (nonatomic) BOOL oneClickFilmingTemplateChanged;
@property (nonatomic) NSString oneClickFilmingMeta;
@property (nonatomic) BOOL isMusicBeatTemplate;
@property (nonatomic) NSString musicBeatTemplateSyncType;
@property (nonatomic) q musicBeatTemplateSyncDuration;
@property (nonatomic) q musicBeatTemplateMaterialCnt;
@property (nonatomic) q musicBeatTemplateMaterialUse;
@property (nonatomic) q musicBeatTemplateDurationUse;
@property (nonatomic) NSString cutSameLokiId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMusicId:;
- (id)musicId;
- (BOOL)isH5;
- (id)editTexts;
- (void)setEditTexts:;
- (id)cutSameId;
- (void)setCutSameId:;
- (id)srcVideoDataList;
- (void)setSrcVideoDataList:;
- (id)concatFilePath;
- (void)setConcatFilePath:;
- (void)setIsH5:;
- (id)openPlatformKey;
- (void)setOpenPlatformKey:;
- (id)openPlatformShareId;
- (void)setOpenPlatformShareId:;
- (BOOL)isNleCutsame;
- (void)setIsNleCutsame:;
- (id)challengeIdList;
- (void)setChallengeIdList:;
- (id)challengeNameList;
- (void)setChallengeNameList:;
- (double)originVoiceVolume;
- (void)setOriginVoiceVolume:;
- (BOOL)oneClickFilmingTemplateChanged;
- (void)setOneClickFilmingTemplateChanged:;
- (id)oneClickFilmingMeta;
- (void)setOneClickFilmingMeta:;
- (BOOL)isMusicBeatTemplate;
- (void)setIsMusicBeatTemplate:;
- (id)musicBeatTemplateSyncType;
- (void)setMusicBeatTemplateSyncType:;
- (long long)musicBeatTemplateSyncDuration;
- (void)setMusicBeatTemplateSyncDuration:;
- (long long)musicBeatTemplateMaterialCnt;
- (void)setMusicBeatTemplateMaterialCnt:;
- (long long)musicBeatTemplateMaterialUse;
- (void)setMusicBeatTemplateMaterialUse:;
- (long long)musicBeatTemplateDurationUse;
- (void)setMusicBeatTemplateDurationUse:;
- (id)cutSameLokiId;
- (void)setCutSameLokiId:;
- (long long)templateType;
- (void).cxx_destruct;
- (void)setTemplateType:;
- (void)setTemplateSource:;
- (long long)templateSource;
+ (id)srcVideoDataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
