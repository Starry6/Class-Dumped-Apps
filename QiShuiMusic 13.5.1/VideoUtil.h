@interface VideoUtil : NSObject
+ (id)convertPixelBuffer:toImageType:withAssetIdentifier:cameraStatusBits:allowTimeMetaData:;
+ (id)sizeForVideoResolution:;
+ (id)getBestCaptureSizeForEncodingSize:;
+ (long long)videoResolutionForWidth:height:;
+ (void)adjustFaceMetadataForPixelBuffer:originalWidth:originalHeight:;
+ (id)adjustFaceBounds:fromOriginalBufferSize:toCroppedBufferSize:;
+ (int)setupBufferPool:width:height:;
+ (long long)compareVideoAspectRatioSizeA:toSizeB:;
+ (id)typeIdentifierForImageType:;
+ (unsigned int)videoCodecForPayload:;
+ (id)computeVisibleAspectRatioWithRemoteScreenAspectRatio:remoteExpectedAspectRatio:encodeWidth:encodeHeight:;
+ (void)attachMetadata:toCVPixelBuffer:;
@end
