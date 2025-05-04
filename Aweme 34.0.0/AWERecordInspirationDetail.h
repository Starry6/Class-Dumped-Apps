@interface AWERecordInspirationDetail : ACCGenericEffectPanelFavoriteModel
@property (nonatomic) Q uiType;
@property (nonatomic) AWENewFaceStickerModel effect;
@property (nonatomic) AWEAweMVTemplateModel templateModel;
@property (nonatomic) BOOL customCoverRatio;
- (void)setCustomCoverRatio:;
- (BOOL)customCoverRatio;
- (id)effect;
- (void).cxx_destruct;
- (void)setEffect:;
- (void)setUiType:;
- (unsigned long long)uiType;
- (void)setTemplateModel:;
- (id)templateModel;
+ (id)effectJSONTransformer;
+ (id)templateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
