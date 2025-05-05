@interface VCVideoFeatureListStringHelper : NSObject
+ (id)retrieveRawFeaturesStringWithType:;
+ (void)fixInvalidAspectRatioPortrait:landscape:;
+ (void)aspectRatioPortrait:landscape:isMismatchedOrientation:;
+ (id)deriveAspectRatioFLS;
+ (id)deriveAspectRatioFLSWithPortraitRatio:landscapeRatio:expectedPortraitRatio:expectedLandscapeRatio:;
+ (BOOL)findFeatureString:value:valueLength:withPrefix:;
+ (id)newLocalFeaturesStringWithType:;
+ (id)newLocalFeaturesStringWithType:aspectRatioFLS:;
+ (id)newEmptyFeatureStringWithPayload:;
+ (id)newEmptyFeatureString;
+ (BOOL)extractAspectRatios:prefix:landscapeX:landscapeY:portraitX:portraitY:;
+ (BOOL)extractAspectRatios:landscapeX:landscapeY:portraitX:portraitY:;
+ (BOOL)extractExpectedAspectRatios:expectedLandscapeX:expectedLandscapeY:expectedPortraitX:expectedPortraitY:;
+ (int)defaultPayload:;
+ (BOOL)featureListString:maxSize:payload:featureListStrings:;
+ (id)newScreenFeatureString;
+ (id)newFeatureListStringsDictForGroupID:isOneToOne:;
@end
