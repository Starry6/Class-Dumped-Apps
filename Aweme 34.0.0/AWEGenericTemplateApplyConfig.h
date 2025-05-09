@interface AWEGenericTemplateApplyConfig : NSObject
@property (nonatomic) BOOL skipUpdateVideoData;
@property (nonatomic) NLEModel_OC externalModel;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) BOOL lastTemplateHasStickers;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) @? onDidUpdatePrepareProgress;
@property (nonatomic) @? onWillApply;
@property (nonatomic) @? onDidPreprocess;
@property (nonatomic) @? onDidApply;
@property (nonatomic) @? onDidUpdateVideoData;
@property (nonatomic) @? onTemplateFirstRender;
@property (nonatomic) @? onSeekCompletion;
- (BOOL)lastTemplateHasStickers;
- (void)setLastTemplateHasStickers:;
- (id)externalModel;
- (void)setExternalModel:;
- (void)setOnWillApply:;
- (void)setOnDidApply:;
- (void)setOnDidUpdateVideoData:;
- (void)setOnTemplateFirstRender:;
- (void)setOnSeekCompletion:;
- (void)setSkipUpdateVideoData:;
- (void)setOnDidPreprocess:;
- (id)onDidUpdatePrepareProgress;
- (id)onDidUpdateVideoData;
- (id)onDidPreprocess;
- (id)onWillApply;
- (id)onDidApply;
- (BOOL)skipUpdateVideoData;
- (id)onTemplateFirstRender;
- (id)onSeekCompletion;
- (void)setOnDidUpdatePrepareProgress:;
- (id)repository;
- (void).cxx_destruct;
- (void)setRepository:;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
