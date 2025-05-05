@interface PHValidator : NSObject
- (BOOL)getLivePhotoVideoMetadataFromURL:pairingIdentifier:videoDuration:imageDisplayTime:error:;
- (BOOL)validateURL:withOptions:error:;
- (BOOL)validateURLs:withOptions:error:;
- (BOOL)validateData:withOptions:error:;
- (BOOL)isValidImagePathExtension:;
- (BOOL)isValidVideoPathExtension:;
- (BOOL)_validateImageSource:error:;
- (BOOL)_validateVideoURL:error:;
- (BOOL)_validateLivePhotoResourceURLs:error:;
- (void)getLivePhotoImageMetadataFromURL:pairingIdentifier:;
+ (unsigned char)mediaTypeForContentType:;
+ (unsigned char)mediaTypeForURL:;
+ (BOOL)isSupportedAudioAtPath:;
+ (BOOL)isSupportedMovieAtPath:;
+ (BOOL)isSupportedImageAtPath:;
@end
