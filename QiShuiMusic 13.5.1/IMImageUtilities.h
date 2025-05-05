@interface IMImageUtilities : NSObject
+ (BOOL)persistCPBitmapWithImage:url:;
+ (BOOL)persistPreviewToDiskCache:previewURL:error:;
+ (id)imageSourcePxSize:;
+ (id)imageRefPxSize:;
+ (void)sampleImageEdges:usingRect:forMostlyWhitePixels:otherPixels:bytesPerRow:;
+ (id)newThumbnailForTargetSize:imageSize:imageSource:mode:scale:;
+ (id)newThumbnailForTargetSize:imageSize:imageSource:atIndex:mode:scale:;
+ (double)scaleFactorForThumbnailWithSize:constraints:targetPxSize:shouldScaleUpPreview:maxUpScale:;
@end
