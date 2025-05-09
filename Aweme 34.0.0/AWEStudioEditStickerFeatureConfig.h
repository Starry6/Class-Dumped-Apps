@interface AWEStudioEditStickerFeatureConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) BOOL infoStickerEnabled;
@property (nonatomic) BOOL AIMattingStickerEnabled;
@property (nonatomic) BOOL pollStickerEnabled;
@property (nonatomic) BOOL POIStickerEnabled;
@property (nonatomic) BOOL lyricStickerEnabled;
@property (nonatomic) BOOL socialStickerEnabled;
@property (nonatomic) BOOL canvasStickerEnabled;
@property (nonatomic) BOOL liveStickerEnabled;
@property (nonatomic) BOOL shareLiveToStoryStickerEnabled;
@property (nonatomic) BOOL searchStickerEnabled;
@property (nonatomic) BOOL grootStickerEnabled;
@property (nonatomic) BOOL IMGroupStickerEnabled;
@property (nonatomic) BOOL fansInteractionStickerEnabled;
@property (nonatomic) AWEStudioEditTextStickerFeatureConfig textStickerFeatureConfig;
@property (nonatomic) BOOL forceEnableTapEnterTextPanel;
- (BOOL)infoStickerEnabled;
- (void)setInfoStickerEnabled:;
- (BOOL)AIMattingStickerEnabled;
- (void)setAIMattingStickerEnabled:;
- (BOOL)pollStickerEnabled;
- (void)setPollStickerEnabled:;
- (BOOL)POIStickerEnabled;
- (void)setPOIStickerEnabled:;
- (BOOL)lyricStickerEnabled;
- (void)setLyricStickerEnabled:;
- (BOOL)socialStickerEnabled;
- (void)setSocialStickerEnabled:;
- (BOOL)canvasStickerEnabled;
- (void)setCanvasStickerEnabled:;
- (BOOL)liveStickerEnabled;
- (void)setLiveStickerEnabled:;
- (BOOL)shareLiveToStoryStickerEnabled;
- (void)setShareLiveToStoryStickerEnabled:;
- (BOOL)searchStickerEnabled;
- (void)setSearchStickerEnabled:;
- (BOOL)grootStickerEnabled;
- (void)setGrootStickerEnabled:;
- (BOOL)IMGroupStickerEnabled;
- (void)setIMGroupStickerEnabled:;
- (BOOL)fansInteractionStickerEnabled;
- (void)setFansInteractionStickerEnabled:;
- (id)textStickerFeatureConfig;
- (void)setTextStickerFeatureConfig:;
- (BOOL)forceEnableTapEnterTextPanel;
- (void)setForceEnableTapEnterTextPanel:;
- (id)initWithMode:;
- (void).cxx_destruct;
@end
