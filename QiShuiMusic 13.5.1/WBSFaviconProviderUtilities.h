@interface WBSFaviconProviderUtilities : NSObject
+ (BOOL)isFaviconSize:morePreferrableThanFaviconSize:givenDesiredSize:;
+ (long long)computeRelativeSize:referenceSize:;
+ (id)sizeOfImageWithData:closestToPreferredSize:isMultiResolution:;
+ (id)multiResolutionImageFromImageData:withPreferredSize:atScales:didGenerateResolutions:;
+ (id)imageWithURL:closetToPreferredSize:;
@end
