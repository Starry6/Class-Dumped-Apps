@interface AWEMusicBeatTemplateDetailPreloader : NSObject
@property (nonatomic) NSMutableDictionary templateDic;
- (id)templateDetailResponseWithID:;
- (void)p_trackSlotsInfoCorrectWithTemplateID:awemeModel:mediaModel:;
- (id)templateDic;
- (void)preloadMusicBeatTemplateWithID:awemeModel:;
- (void)storeTemplateResponseCacheWithID:responseModel:awemeModel:;
- (void)removeTemplateResponseCacheWithID:;
- (void)setTemplateDic:;
- (void).cxx_destruct;
@end
