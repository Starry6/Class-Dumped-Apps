@interface AVStreamDataInspectionOnlyAsset : AVURLAsset
- (BOOL)isExportable;
- (id)initWithFigAsset:;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:;
- (BOOL)isReadable;
@end
