@interface IESLiveCommentIntentionsViewModel : NSObject
@property (nonatomic) NSString lastSentence;
@property (nonatomic) NSString tempLastSentence;
@property (nonatomic) NSArray intentionModels;
@property (nonatomic) HTSLiveCommentApi commentApi;
@property (nonatomic) <HTSLiveTemplateProviderAdapter> templateParser;
@property (nonatomic) HTSLiveTemplateEngineConfiguration templateConfig;
@property (nonatomic) double lastSentenceChangeTime;
@property (nonatomic) double latestRequestTime;
@property (nonatomic) WordAssociationResponse_ResponseData unusedWordAssociationData;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL showIntentions;
@property (nonatomic) q intentionREQTimeRate;
@property (nonatomic) double commentPanelShowTimeInterval;
@property (nonatomic) @? intetionsDidUpdatedBlock;
- (id)intentionModels;
- (void)checkUnusedIntentionsAvailable;
- (void)checkUnusedIntentionsShouldTrackHide;
- (id)commentApi;
- (double)commentPanelShowTimeInterval;
- (void)configSubItemsIfNeedWithModel:result:;
- (id)createEntryModelsWithData:;
- (void)didSetAttachingDIContext;
- (void)fetchIntentionsWithSentence:;
- (void)fetchIntentionsWithSentence:preSentence:;
- (id)getPlainTextEntryTitleFromAttributedString:;
- (id)getUnusedIntentionsIfExsit;
- (long long)intentionREQTimeRate;
- (id)intetionsDidUpdatedBlock;
- (id)lastSentence;
- (double)lastSentenceChangeTime;
- (double)latestRequestTime;
- (void)prepareImageForAssociationResultsIfNeeded:completion:;
- (void)realFetchIntentionsWithSentence:preSentence:;
- (void)setCommentApi:;
- (void)setCommentPanelShowTimeInterval:;
- (void)setIntentionModels:;
- (void)setIntentionREQTimeRate:;
- (void)setIntetionsDidUpdatedBlock:;
- (void)setLastSentence:;
- (void)setLastSentenceChangeTime:;
- (void)setLastUnusedIntentions:;
- (void)setLatestRequestTime:;
- (void)setShowIntentions:;
- (void)setTempLastSentence:;
- (void)setTemplateConfig:;
- (void)setTemplateParser:;
- (void)setTrackContext:;
- (void)setUnusedWordAssociationData:;
- (BOOL)showIntentions;
- (id)tempLastSentence;
- (id)templateConfig;
- (id)templateParser;
- (id)trackContext;
- (void)trackIntentionEntryClickWithModel:;
- (void)trackIntentionEntryClickWithModel:fusionEmoji:;
- (void)trackIntentionsEntryShowWithModels:duration:show:;
- (id)unusedWordAssociationData;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setEnable:;
@end
