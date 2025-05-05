@interface VCPFaceCropUtils : NSObject
+ (id)imageCreationOptions;
+ (id)createOutputMetadataFromDictionary:;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:;
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:andCropRegion:andGroupingIdentifier:;
+ (id)newFaceCropFromCGImageSource:withFaceRect:groupingIdentifier:error:;
+ (id)newFaceCropFromImageURL:withNormalizedFaceRect:groupingIdentifier:error:;
+ (id)newFaceCropFromImageData:withFaceRect:groupingIdentifier:error:;
+ (BOOL)isValidFaceCrop:;
+ (id)faceBoundsFromFaceCrop:error:;
+ (id)cropBoundsInOriginalImageFromFaceCrop:error:;
+ (id)groupingIdentifierFromFaceCrop:error:;
+ (id)faceCropDimensionsFromFaceCrop:error:;
@end
