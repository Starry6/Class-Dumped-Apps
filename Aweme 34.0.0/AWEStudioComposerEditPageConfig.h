@interface AWEStudioComposerEditPageConfig : AWEStudioComposerBasePageConfig
@property (nonatomic) AWEStudioEditBasicFeatureConfig basicConfig;
@property (nonatomic) AWEStudioEditToolBarFeatureConfig toolBarFeatureConfig;
@property (nonatomic) AWEStudioEditFlowControlFeatureConfig editFlowControlFeatureConfig;
@property (nonatomic) AWEStudioEditStickerFeatureConfig stickerFeatureConfig;
@property (nonatomic) AWEStudioEditMusicFeatureConfig musicFeatureConfig;
@property (nonatomic) AWEStudioEditOneClickFilmFeatureConfig oneClickFilmFeatureConfig;
@property (nonatomic) AWEStudioEditPlayControlFeatureConfig playControlFeatureConfig;
@property (nonatomic) AWEStudioEditPreUploadFeatureConfig preUploadFeatureConfig;
@property (nonatomic) AWEStudioEditPaymentFeatureConfig paymentFeatureConfig;
@property (nonatomic) AWEStudioEditRedPacketFeatureConfig redPacketFeatureConfig;
@property (nonatomic) AWEStudioEditPageMiniFlowConfig miniFlowConfig;
@property (nonatomic) AWEStudioPublishFlowFeatureConfig publishControlFlowFeatureConfig;
- (id)miniFlowConfig;
- (id)toolBarFeatureConfig;
- (id)stickerFeatureConfig;
- (id)musicFeatureConfig;
- (void)setBasicConfig:;
- (void)setToolBarFeatureConfig:;
- (id)editFlowControlFeatureConfig;
- (void)setEditFlowControlFeatureConfig:;
- (void)setStickerFeatureConfig:;
- (void)setMusicFeatureConfig:;
- (id)oneClickFilmFeatureConfig;
- (void)setOneClickFilmFeatureConfig:;
- (id)playControlFeatureConfig;
- (void)setPlayControlFeatureConfig:;
- (id)preUploadFeatureConfig;
- (void)setPreUploadFeatureConfig:;
- (id)paymentFeatureConfig;
- (void)setPaymentFeatureConfig:;
- (id)redPacketFeatureConfig;
- (void)setRedPacketFeatureConfig:;
- (void)setMiniFlowConfig:;
- (id)publishControlFlowFeatureConfig;
- (void)setPublishControlFlowFeatureConfig:;
- (id)initWithMode:;
- (void).cxx_destruct;
- (id)basicConfig;
@end
