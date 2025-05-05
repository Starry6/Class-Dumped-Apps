@interface PLDCFUtilities : NSObject
+ (id)dcfRegex;
+ (BOOL)isValidDCFFileName:;
+ (id)dcfCompliantNameForFileName:createDate:fileSize:filenameMarker:;
+ (id)dcfRegexForAuxiliaryResourceFilenameMarker:;
+ (id)renderDCFRegex;
+ (BOOL)isRenderFileName:;
+ (id)fileNameByRemovingRenderMarkerInFileName:;
+ (BOOL)isSpatialOverCaptureFileName:;
+ (id)fileNameByRemovingSpatialOverCaptureMarkerInFileName:;
+ (BOOL)fileName:matchesRegex:;
+ (id)makeDCFFileNameFromFileName:createDate:fileSize:;
+ (id)makeDCFFileNameByHashingFileName:createDate:fileSize:;
+ (id)insertAuxiliaryResourceTypeMarker:intoFileName:;
+ (unsigned int)hashForFileName:createDate:fileSize:;
+ (void)computeSHA256OfString:intoBuffer:;
+ (id)encodeFileNameFromHash:;
+ (id)convertHash:usingPlaceValues:;
+ (id)placeValuesFromBases:;
@end
