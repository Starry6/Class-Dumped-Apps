@interface LPMIMETypeRegistry : NSObject
+ (BOOL)isWebPageType:;
+ (BOOL)isImageType:;
+ (BOOL)isVideoType:;
+ (BOOL)isMediaType:;
+ (BOOL)isAudioType:;
+ (BOOL)isJSONType:;
+ (BOOL)isHLSType:;
+ (BOOL)isARAssetType:;
+ (BOOL)isNonAnimatedMultiframeImageType:;
+ (id)MIMETypeForUTI:;
+ (id)UTIForMIMEType:;
+ (id)UTIForFileExtension:;
+ (id)fileExtensionForUTI:;
+ (id)fileExtensionForMIMEType:;
@end
