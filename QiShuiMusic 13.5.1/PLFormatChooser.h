@interface PLFormatChooser : NSObject
@property (nonatomic) NSArray supportedDerivativeFormats;
@property (nonatomic) PLImageFormat fullScreenFormatForCurrentDevice;
@property (nonatomic) PLImageFormat indexSheetUnbakedFormat;
@property (nonatomic) PLImageFormat largestUncroppedNonJPEGThumbnailFormat;
@property (nonatomic) PLImageFormat masterThumbnailFormat;
@property (nonatomic) PLImageFormat portraitScrubberThumbnailFormat;
@property (nonatomic) PLImageFormat landscapeScrubberThumbnailFormat;
- (void)chooseFormatsForSize:specificVersionType:contentMode:demoteFactor:srcAspectRatio:degradedFormatPolicy:hasAdjustmentsHandler:desiredImagePixelSize:bestFormat:degradedFormat:;
- (id)landscapeScrubberThumbnailFormat;
- (id)_bestFormatWithSize:specificVersionType:contentMode:demoteFactor:srcAspectRatio:hasAdjustmentsHandler:desiredImagePixelSize:;
- (id)portraitScrubberThumbnailFormat;
- (id)largestUncroppedNonJPEGThumbnailFormat;
- (id)_nextLargestAcceptableFormatForFormat:;
- (id)fullScreenFormatForCurrentDevice;
- (id)initWithDeviceConfiguration:;
- (void).cxx_destruct;
- (id)_fastestDegradedFormatFallingBackFromFormat:;
- (id)indexSheetUnbakedFormat;
- (id)posterThumbnailSize;
- (id)_standardDegradedFormatFallingBackFromFormat:;
- (id)supportedDerivativeFormats;
- (id)masterThumbnailFormat;
- (id)derivativeFormatThatFitsSize:contentMode:demoteFactor:srcAspectRatio:desiredImagePixelSize:;
+ (id)_suppportedFullSizeFormatIDs;
+ (id)_desiredImageSizeForRequestedViewSizeInPixels:isAspectFill:srcAspectRatio:;
+ (id)defaultFormatChooser;
@end
