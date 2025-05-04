@interface AWEEditerBeautyItemExtraModel : AWERecordBeautyItemExtraModel
- (BOOL)isStyleStatus;
- (id)beautifyModel;
- (BOOL)p_getBOOLValueFromDict:key:;
- (BOOL)isMultipersonStatus;
- (void)p_setupPropertiesWithExtraString:shouldUseComposerParams:composerParamsStr:;
- (void)fillBeautifyModelWithString:;
- (void)p_generateBeautifyModelWithDict:;
- (id)initWithExtraString:shouldUseComposerParams:composerParamsStr:;
- (BOOL)shouldDisableCache;
- (BOOL)isDefault;
- (void).cxx_destruct;
- (BOOL)isNone;
@end
