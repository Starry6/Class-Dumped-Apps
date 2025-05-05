@interface LNFeatureFlags : NSObject
+ (BOOL)isStaticMetadataIngestionEnabled;
+ (BOOL)isViewActionAnnotationEnabled;
+ (BOOL)isLowPowerDeviceEnabled;
+ (void)setIsVocabularyDonationOverrideEnabled:;
+ (BOOL)isActionTranscriptEnabled;
+ (BOOL)isVocabularyDonationEnabled;
+ (id)allFeatures;
+ (BOOL)isRuntimeMetadataSupported;
@end
