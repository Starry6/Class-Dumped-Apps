@interface AWEFavoriteEffectsAndTemplatesDetail : ACCGenericEffectPanelFavoriteModel
@property (nonatomic) Q uiType;
@property (nonatomic) AWENewFaceStickerModel effect;
@property (nonatomic) AWEAweMVTemplateModel templateModel;
@property (nonatomic) q templateType;
@property (nonatomic) BOOL customCoverRatio;
- (void)setCustomCoverRatio:;
- (BOOL)customCoverRatio;
- (id)effect;
- (long long)templateType;
- (void).cxx_destruct;
- (void)setEffect:;
- (void)setTemplateType:;
- (void)setUiType:;
- (unsigned long long)uiType;
- (void)setTemplateModel:;
- (id)templateModel;
+ (id)effectJSONTransformer;
+ (id)templateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
