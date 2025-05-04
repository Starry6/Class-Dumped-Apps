@interface AWEAIEnhanceUtils : NSObject
+ (id)enhanceFuncName;
+ (BOOL)shouldAddAIEnhanceComponent:;
+ (BOOL)aiEnhanceUseSliderStyle:;
+ (void)replaceMainTrackImageWithFilePath:aiExpandService:publishModel:isOrigin:completion:;
+ (void)restoreToOriginalRepoImageInfoInstance:;
+ (long long)enhanceTimeoutInMSecond;
+ (long long)aiEnhanceDefaultStrength:;
+ (id)mainTrackImagePathWithNle:;
+ (BOOL)shouldShowAIEnhanceBarItem:;
+ (id)scriptCdnSchema;
+ (BOOL)aipUploadUseBinary;
+ (long long)aipUploadBytesMaxLimit;
+ (BOOL)aipDownloadUseBinary;
+ (BOOL)useC1500Alg;
+ (id)_nleInterface:;
+ (id)aiEnhanceConfig;
+ (BOOL)_experimentEnableAIEnhance:;
+ (id)_aiEnhanceConfig:;
@end
