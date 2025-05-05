@interface PAMediaConversionServiceImagingUtilities : NSObject
+ (BOOL)generatePosterFrameExportForVideoURL:outputData:maximumSize:outputFileType:error:;
+ (id)imageDataForPassthroughConversionForSourceURL:metadataPolicy:outResultImageSize:;
+ (id)imagePropertiesForFileAtURL:;
+ (BOOL)generatePosterFrameExportForVideoURL:destinationURL:maximumSize:outputFileType:error:;
+ (BOOL)_generatePosterFrameExportForVideoURL:imageDestinationToAddToAndFinalize:maximumSize:error:;
@end
