@interface AWEMusicDetailInspirationTemplateResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber status;
@property (nonatomic) AWEMusicDetailInspirationTemplateBodyModel templateBodyModel;
- (id)templateBodyModel;
- (void)setTemplateBodyModel:;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)status;
+ (id)templateBodyModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
