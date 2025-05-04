@interface AWERecordBeautyItemExtraModel : NSObject
@property (nonatomic) BOOL isNone;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL shouldDisableCache;
@property (nonatomic) BOOL isStyleStatus;
@property (nonatomic) BOOL isMultipersonStatus;
@property (nonatomic) AWERecordBeautyItemExtraBeautifyModel beautifyModel;
- (BOOL)isStyleStatus;
- (id)beautifyModel;
- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (BOOL)p_getBOOLValueFromDict:key:;
- (BOOL)isMultipersonStatus;
- (void)p_setupPropertiesWithExtraString:shouldUseComposerParams:composerParamsStr:;
- (void)fillBeautifyModelWithString:;
- (void)p_generateBeautifyModelWithDict:;
- (id)initWithExtraString:shouldUseComposerParams:composerParamsStr:;
- (BOOL)shouldDisableCache;
- (id)init;
- (BOOL)isDefault;
- (void).cxx_destruct;
- (BOOL)isNone;
@end
