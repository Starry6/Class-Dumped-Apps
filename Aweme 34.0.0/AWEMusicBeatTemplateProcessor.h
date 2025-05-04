@interface AWEMusicBeatTemplateProcessor : NSObject
@property (nonatomic) AWEMusicBeatTemplateDetailPreloader detailPreloader;
- (void)p_showError;
- (void)startMusicBeatTemplateProcessWithTemplateID:awemeModel:extraInfo:;
- (void)preloadMusicBeatTemplateWithID:awemeModel:;
- (id)p_genExtraInfoWithAwemeModel:anchorExtraStr:;
- (id)detailPreloader;
- (void)setDetailPreloader:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
