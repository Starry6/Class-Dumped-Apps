@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:;
- (BOOL)isReadable;
@end
