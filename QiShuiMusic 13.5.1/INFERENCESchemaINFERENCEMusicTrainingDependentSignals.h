@interface INFERENCESchemaINFERENCEMusicTrainingDependentSignals : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isClientForegroundActiveBundle;
@property (nonatomic) BOOL hasIsClientForegroundActiveBundle;
@property (nonatomic) double compoundActiveBundleScore;
@property (nonatomic) BOOL hasCompoundActiveBundleScore;
@property (nonatomic) double compoundMediaTypeBundleScore;
@property (nonatomic) BOOL hasCompoundMediaTypeBundleScore;
@property (nonatomic) double entitySearchBundleRecencyS;
@property (nonatomic) BOOL hasEntitySearchBundleRecencyS;
@property (nonatomic) double entitySearchBundleScore;
@property (nonatomic) BOOL hasEntitySearchBundleScore;
@property (nonatomic) BOOL isForegroundBundle;
@property (nonatomic) BOOL hasIsForegroundBundle;
@property (nonatomic) BOOL isNowPlayingBundle;
@property (nonatomic) BOOL hasIsNowPlayingBundle;
@property (nonatomic) NSInteger nowPlayingBundleCount;
@property (nonatomic) BOOL hasNowPlayingBundleCount;
@property (nonatomic) double nowPlayingBundleRecencyS;
@property (nonatomic) BOOL hasNowPlayingBundleRecencyS;
@property (nonatomic) double nowPlayingBundleScore;
@property (nonatomic) BOOL hasNowPlayingBundleScore;
@property (nonatomic) BOOL isNowPlayingLastBundle;
@property (nonatomic) BOOL hasIsNowPlayingLastBundle;
@property (nonatomic) NSInteger nowPlayingUsage1Day;
@property (nonatomic) BOOL hasNowPlayingUsage1Day;
@property (nonatomic) NSInteger nowPlayingUsage7Days;
@property (nonatomic) BOOL hasNowPlayingUsage7Days;
@property (nonatomic) NSInteger nowPlayingUsage14Days;
@property (nonatomic) BOOL hasNowPlayingUsage14Days;
@property (nonatomic) BOOL isRawLastNowPlayingCoreDuet;
@property (nonatomic) BOOL hasIsRawLastNowPlayingCoreDuet;
@property (nonatomic) BOOL isRawMediaCategoryAudiobookSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryAudiobookSignal;
@property (nonatomic) BOOL isRawMediaCategoryMusicSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryMusicSignal;
@property (nonatomic) BOOL isRawMediaCategoryPodcastSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryPodcastSignal;
@property (nonatomic) BOOL isRawMediaCategoryRadioSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryRadioSignal;
@property (nonatomic) BOOL isRawMediaCategoryVideoSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryVideoSignal;
@property (nonatomic) NSInteger rawMediaTypeUsageSignalBook;
@property (nonatomic) BOOL hasRawMediaTypeUsageSignalBook;
@property (nonatomic) NSInteger rawMediaTypeUsageSignalMusic;
@property (nonatomic) BOOL hasRawMediaTypeUsageSignalMusic;
@property (nonatomic) NSInteger rawMediaTypeUsageSignalPodcast;
@property (nonatomic) BOOL hasRawMediaTypeUsageSignalPodcast;
@property (nonatomic) NSInteger rawMediaTypeUsageSignalVideo;
@property (nonatomic) BOOL hasRawMediaTypeUsageSignalVideo;
@property (nonatomic) NSInteger rawNowPlayingCountCoreDuet10Min;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet10Min;
@property (nonatomic) NSInteger rawNowPlayingCountCoreDuet1Day;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet1Day;
@property (nonatomic) NSInteger rawNowPlayingCountCoreDuet1Hr;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet1Hr;
@property (nonatomic) NSInteger rawNowPlayingCountCoreDuet28Day;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet28Day;
@property (nonatomic) NSInteger rawNowPlayingCountCoreDuet2Min;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet2Min;
@property (nonatomic) NSInteger rawNowPlayingCountCoreDuet6Hr;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet6Hr;
@property (nonatomic) NSInteger rawNowPlayingCountCoreDuet7Day;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet7Day;
@property (nonatomic) NSInteger rawNowPlayingRecencyCD;
@property (nonatomic) BOOL hasRawNowPlayingRecencyCD;
@property (nonatomic) NSInteger rawEntitySearchRecency;
@property (nonatomic) BOOL hasRawEntitySearchRecency;
@property (nonatomic) double usageScoreBooks;
@property (nonatomic) BOOL hasUsageScoreBooks;
@property (nonatomic) double usageScoreMusic;
@property (nonatomic) BOOL hasUsageScoreMusic;
@property (nonatomic) double usageScorePodcasts;
@property (nonatomic) BOOL hasUsageScorePodcasts;
@property (nonatomic) BOOL isAppFirstParty;
@property (nonatomic) BOOL hasIsAppFirstParty;
@property (nonatomic) BOOL isRequestedApp;
@property (nonatomic) BOOL hasIsRequestedApp;
@property (nonatomic) BOOL isNowPlayingBundlePSE1;
@property (nonatomic) BOOL hasIsNowPlayingBundlePSE1;
@property (nonatomic) BOOL isNowPlayingBundlePSE2;
@property (nonatomic) BOOL hasIsNowPlayingBundlePSE2;
@property (nonatomic) double vq21Score;
@property (nonatomic) BOOL hasVq21Score;
@property (nonatomic) BOOL isSupportedFlag;
@property (nonatomic) BOOL hasIsSupportedFlag;
@property (nonatomic) BOOL isUnicornFlag;
@property (nonatomic) BOOL hasIsUnicornFlag;
@property (nonatomic) BOOL isSupportedUnicornMatchFlag;
@property (nonatomic) BOOL hasIsSupportedUnicornMatchFlag;
@property (nonatomic) BOOL isDisambiguationSelectedApp;
@property (nonatomic) BOOL hasIsDisambiguationSelectedApp;
@property (nonatomic) BOOL isModelPredictedApp;
@property (nonatomic) BOOL hasIsModelPredictedApp;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setIsClientForegroundActiveBundle:;
- (BOOL)hasIsClientForegroundActiveBundle;
- (void)setHasIsClientForegroundActiveBundle:;
- (void)deleteIsClientForegroundActiveBundle;
- (void)setCompoundActiveBundleScore:;
- (BOOL)hasCompoundActiveBundleScore;
- (void)setHasCompoundActiveBundleScore:;
- (void)deleteCompoundActiveBundleScore;
- (void)setCompoundMediaTypeBundleScore:;
- (BOOL)hasCompoundMediaTypeBundleScore;
- (void)setHasCompoundMediaTypeBundleScore:;
- (void)deleteCompoundMediaTypeBundleScore;
- (void)setEntitySearchBundleRecencyS:;
- (BOOL)hasEntitySearchBundleRecencyS;
- (void)setHasEntitySearchBundleRecencyS:;
- (void)deleteEntitySearchBundleRecencyS;
- (void)setEntitySearchBundleScore:;
- (BOOL)hasEntitySearchBundleScore;
- (void)setHasEntitySearchBundleScore:;
- (void)deleteEntitySearchBundleScore;
- (void)setIsForegroundBundle:;
- (BOOL)hasIsForegroundBundle;
- (void)setHasIsForegroundBundle:;
- (void)deleteIsForegroundBundle;
- (void)setIsNowPlayingBundle:;
- (BOOL)hasIsNowPlayingBundle;
- (void)setHasIsNowPlayingBundle:;
- (void)deleteIsNowPlayingBundle;
- (void)setNowPlayingBundleCount:;
- (BOOL)hasNowPlayingBundleCount;
- (void)setHasNowPlayingBundleCount:;
- (void)deleteNowPlayingBundleCount;
- (void)setNowPlayingBundleRecencyS:;
- (BOOL)hasNowPlayingBundleRecencyS;
- (void)setHasNowPlayingBundleRecencyS:;
- (void)deleteNowPlayingBundleRecencyS;
- (void)setNowPlayingBundleScore:;
- (BOOL)hasNowPlayingBundleScore;
- (void)setHasNowPlayingBundleScore:;
- (void)deleteNowPlayingBundleScore;
- (void)setIsNowPlayingLastBundle:;
- (BOOL)hasIsNowPlayingLastBundle;
- (void)setHasIsNowPlayingLastBundle:;
- (void)deleteIsNowPlayingLastBundle;
- (void)setNowPlayingUsage1Day:;
- (BOOL)hasNowPlayingUsage1Day;
- (void)setHasNowPlayingUsage1Day:;
- (void)deleteNowPlayingUsage1Day;
- (void)setNowPlayingUsage7Days:;
- (BOOL)hasNowPlayingUsage7Days;
- (void)setHasNowPlayingUsage7Days:;
- (void)deleteNowPlayingUsage7Days;
- (void)setNowPlayingUsage14Days:;
- (BOOL)hasNowPlayingUsage14Days;
- (void)setHasNowPlayingUsage14Days:;
- (void)deleteNowPlayingUsage14Days;
- (void)setIsRawLastNowPlayingCoreDuet:;
- (BOOL)hasIsRawLastNowPlayingCoreDuet;
- (void)setHasIsRawLastNowPlayingCoreDuet:;
- (void)deleteIsRawLastNowPlayingCoreDuet;
- (void)setIsRawMediaCategoryAudiobookSignal:;
- (BOOL)hasIsRawMediaCategoryAudiobookSignal;
- (void)setHasIsRawMediaCategoryAudiobookSignal:;
- (void)deleteIsRawMediaCategoryAudiobookSignal;
- (void)setIsRawMediaCategoryMusicSignal:;
- (BOOL)hasIsRawMediaCategoryMusicSignal;
- (void)setHasIsRawMediaCategoryMusicSignal:;
- (void)deleteIsRawMediaCategoryMusicSignal;
- (void)setIsRawMediaCategoryPodcastSignal:;
- (BOOL)hasIsRawMediaCategoryPodcastSignal;
- (void)setHasIsRawMediaCategoryPodcastSignal:;
- (void)deleteIsRawMediaCategoryPodcastSignal;
- (void)setIsRawMediaCategoryRadioSignal:;
- (BOOL)hasIsRawMediaCategoryRadioSignal;
- (void)setHasIsRawMediaCategoryRadioSignal:;
- (void)deleteIsRawMediaCategoryRadioSignal;
- (void)setIsRawMediaCategoryVideoSignal:;
- (BOOL)hasIsRawMediaCategoryVideoSignal;
- (void)setHasIsRawMediaCategoryVideoSignal:;
- (void)deleteIsRawMediaCategoryVideoSignal;
- (void)setRawMediaTypeUsageSignalBook:;
- (BOOL)hasRawMediaTypeUsageSignalBook;
- (void)setHasRawMediaTypeUsageSignalBook:;
- (void)deleteRawMediaTypeUsageSignalBook;
- (void)setRawMediaTypeUsageSignalMusic:;
- (BOOL)hasRawMediaTypeUsageSignalMusic;
- (void)setHasRawMediaTypeUsageSignalMusic:;
- (void)deleteRawMediaTypeUsageSignalMusic;
- (void)setRawMediaTypeUsageSignalPodcast:;
- (BOOL)hasRawMediaTypeUsageSignalPodcast;
- (void)setHasRawMediaTypeUsageSignalPodcast:;
- (void)deleteRawMediaTypeUsageSignalPodcast;
- (void)setRawMediaTypeUsageSignalVideo:;
- (BOOL)hasRawMediaTypeUsageSignalVideo;
- (void)setHasRawMediaTypeUsageSignalVideo:;
- (void)deleteRawMediaTypeUsageSignalVideo;
- (void)setRawNowPlayingCountCoreDuet10Min:;
- (BOOL)hasRawNowPlayingCountCoreDuet10Min;
- (void)setHasRawNowPlayingCountCoreDuet10Min:;
- (void)deleteRawNowPlayingCountCoreDuet10Min;
- (void)setRawNowPlayingCountCoreDuet1Day:;
- (BOOL)hasRawNowPlayingCountCoreDuet1Day;
- (void)setHasRawNowPlayingCountCoreDuet1Day:;
- (void)deleteRawNowPlayingCountCoreDuet1Day;
- (void)setRawNowPlayingCountCoreDuet1Hr:;
- (BOOL)hasRawNowPlayingCountCoreDuet1Hr;
- (void)setHasRawNowPlayingCountCoreDuet1Hr:;
- (void)deleteRawNowPlayingCountCoreDuet1Hr;
- (void)setRawNowPlayingCountCoreDuet28Day:;
- (BOOL)hasRawNowPlayingCountCoreDuet28Day;
- (void)setHasRawNowPlayingCountCoreDuet28Day:;
- (void)deleteRawNowPlayingCountCoreDuet28Day;
- (void)setRawNowPlayingCountCoreDuet2Min:;
- (BOOL)hasRawNowPlayingCountCoreDuet2Min;
- (void)setHasRawNowPlayingCountCoreDuet2Min:;
- (void)deleteRawNowPlayingCountCoreDuet2Min;
- (void)setRawNowPlayingCountCoreDuet6Hr:;
- (BOOL)hasRawNowPlayingCountCoreDuet6Hr;
- (void)setHasRawNowPlayingCountCoreDuet6Hr:;
- (void)deleteRawNowPlayingCountCoreDuet6Hr;
- (void)setRawNowPlayingCountCoreDuet7Day:;
- (BOOL)hasRawNowPlayingCountCoreDuet7Day;
- (void)setHasRawNowPlayingCountCoreDuet7Day:;
- (void)deleteRawNowPlayingCountCoreDuet7Day;
- (void)setRawNowPlayingRecencyCD:;
- (BOOL)hasRawNowPlayingRecencyCD;
- (void)setHasRawNowPlayingRecencyCD:;
- (void)deleteRawNowPlayingRecencyCD;
- (void)setRawEntitySearchRecency:;
- (BOOL)hasRawEntitySearchRecency;
- (void)setHasRawEntitySearchRecency:;
- (void)deleteRawEntitySearchRecency;
- (void)setUsageScoreBooks:;
- (BOOL)hasUsageScoreBooks;
- (void)setHasUsageScoreBooks:;
- (void)deleteUsageScoreBooks;
- (void)setUsageScoreMusic:;
- (BOOL)hasUsageScoreMusic;
- (void)setHasUsageScoreMusic:;
- (void)deleteUsageScoreMusic;
- (void)setUsageScorePodcasts:;
- (BOOL)hasUsageScorePodcasts;
- (void)setHasUsageScorePodcasts:;
- (void)deleteUsageScorePodcasts;
- (void)setIsAppFirstParty:;
- (BOOL)hasIsAppFirstParty;
- (void)setHasIsAppFirstParty:;
- (void)deleteIsAppFirstParty;
- (void)setIsRequestedApp:;
- (BOOL)hasIsRequestedApp;
- (void)setHasIsRequestedApp:;
- (void)deleteIsRequestedApp;
- (void)setIsNowPlayingBundlePSE1:;
- (BOOL)hasIsNowPlayingBundlePSE1;
- (void)setHasIsNowPlayingBundlePSE1:;
- (void)deleteIsNowPlayingBundlePSE1;
- (void)setIsNowPlayingBundlePSE2:;
- (BOOL)hasIsNowPlayingBundlePSE2;
- (void)setHasIsNowPlayingBundlePSE2:;
- (void)deleteIsNowPlayingBundlePSE2;
- (void)setVq21Score:;
- (BOOL)hasVq21Score;
- (void)setHasVq21Score:;
- (void)deleteVq21Score;
- (void)setIsSupportedFlag:;
- (BOOL)hasIsSupportedFlag;
- (void)setHasIsSupportedFlag:;
- (void)deleteIsSupportedFlag;
- (void)setIsUnicornFlag:;
- (BOOL)hasIsUnicornFlag;
- (void)setHasIsUnicornFlag:;
- (void)deleteIsUnicornFlag;
- (void)setIsSupportedUnicornMatchFlag:;
- (BOOL)hasIsSupportedUnicornMatchFlag;
- (void)setHasIsSupportedUnicornMatchFlag:;
- (void)deleteIsSupportedUnicornMatchFlag;
- (void)setIsDisambiguationSelectedApp:;
- (BOOL)hasIsDisambiguationSelectedApp;
- (void)setHasIsDisambiguationSelectedApp:;
- (void)deleteIsDisambiguationSelectedApp;
- (void)setIsModelPredictedApp:;
- (BOOL)hasIsModelPredictedApp;
- (void)setHasIsModelPredictedApp:;
- (void)deleteIsModelPredictedApp;
- (BOOL)isClientForegroundActiveBundle;
- (double)compoundActiveBundleScore;
- (double)compoundMediaTypeBundleScore;
- (double)entitySearchBundleRecencyS;
- (double)entitySearchBundleScore;
- (BOOL)isForegroundBundle;
- (BOOL)isNowPlayingBundle;
- (int)nowPlayingBundleCount;
- (double)nowPlayingBundleRecencyS;
- (double)nowPlayingBundleScore;
- (BOOL)isNowPlayingLastBundle;
- (int)nowPlayingUsage1Day;
- (int)nowPlayingUsage7Days;
- (int)nowPlayingUsage14Days;
- (BOOL)isRawLastNowPlayingCoreDuet;
- (BOOL)isRawMediaCategoryAudiobookSignal;
- (BOOL)isRawMediaCategoryMusicSignal;
- (BOOL)isRawMediaCategoryPodcastSignal;
- (BOOL)isRawMediaCategoryRadioSignal;
- (BOOL)isRawMediaCategoryVideoSignal;
- (int)rawMediaTypeUsageSignalBook;
- (int)rawMediaTypeUsageSignalMusic;
- (int)rawMediaTypeUsageSignalPodcast;
- (int)rawMediaTypeUsageSignalVideo;
- (int)rawNowPlayingCountCoreDuet10Min;
- (int)rawNowPlayingCountCoreDuet1Day;
- (int)rawNowPlayingCountCoreDuet1Hr;
- (int)rawNowPlayingCountCoreDuet28Day;
- (int)rawNowPlayingCountCoreDuet2Min;
- (int)rawNowPlayingCountCoreDuet6Hr;
- (int)rawNowPlayingCountCoreDuet7Day;
- (int)rawNowPlayingRecencyCD;
- (int)rawEntitySearchRecency;
- (double)usageScoreBooks;
- (double)usageScoreMusic;
- (double)usageScorePodcasts;
- (BOOL)isAppFirstParty;
- (BOOL)isRequestedApp;
- (BOOL)isNowPlayingBundlePSE1;
- (BOOL)isNowPlayingBundlePSE2;
- (double)vq21Score;
- (BOOL)isSupportedFlag;
- (BOOL)isUnicornFlag;
- (BOOL)isSupportedUnicornMatchFlag;
- (BOOL)isDisambiguationSelectedApp;
- (BOOL)isModelPredictedApp;
@end
