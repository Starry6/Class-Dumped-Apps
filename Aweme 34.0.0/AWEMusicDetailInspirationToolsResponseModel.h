@interface AWEMusicDetailInspirationToolsResponseModel : AWEBaseApiModel
@property (nonatomic) AWEMusicDetailInspirationPropResponseModel propResponseModel;
@property (nonatomic) AWEMusicDetailInspirationQuickFlashResponseModel quickFlashResponseModel;
@property (nonatomic) AWEMusicDetailInspirationTemplateResponseModel templateReponseModel;
- (id)propResponseModel;
- (void)setPropResponseModel:;
- (id)quickFlashResponseModel;
- (void)setQuickFlashResponseModel:;
- (id)templateReponseModel;
- (void)setTemplateReponseModel:;
- (void).cxx_destruct;
+ (id)templateBodyModelJSONTransformer;
+ (id)quickFlashResponseModelJSONTransformer;
+ (id)templateReponseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
