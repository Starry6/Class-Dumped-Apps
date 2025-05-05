@interface PFImageMetadata : NSObject
+ (BOOL)queryImagePropertiesOfFileAtURL:error:block:;
+ (BOOL)writeMetadataType:value:toCGImageProperties:error:;
+ (id)createImageRefFromAuxiliaryImagePixelBuffer:applyingOrientation:scaleFactor:;
+ (BOOL)metadataTypeRequiresImageSource:;
+ (id)auxiliaryImagesToPreserveForDerivativesFromImageSource:imageIndex:;
+ (BOOL)enumerateImageSourceIndexesOfFileAtURL:error:block:;
+ (id)valueFromCGImageProperties:dictionaryKey:key:;
+ (BOOL)readMetadataValueFromImageAtFileURL:dictionaryKey:key:value:error:;
+ (id)createImageRefFromAuxiliaryImageInfo:applyingOrientation:scaleFactor:;
+ (id)transformAuxiliaryImages:scaleFactor:applyingOrientation:;
+ (id)createPixelBufferFromAuxiliaryImageInfo:;
+ (id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:metadata:;
+ (BOOL)imageSourceIsMonoski:;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromPrimaryImageInImageSource:;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromImageSource:imageIndex:;
+ (id)imagePropertiesByRemovingKey:dictionaryKey:fromImageProperties:;
+ (id)cIImageFromPixelBuffer:applyingOrientation:scaleFactor:;
+ (BOOL)readMetadataType:fromCGImageProperties:value:error:;
+ (id)cIImageFromAuxiliaryImageInfo:applyingOrientation:scaleFactor:;
+ (BOOL)readMetadataType:fromFileURL:value:error:;
+ (id)auxiliaryImageIdentifiersToPreserveForDerivatives;
@end
