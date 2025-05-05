@interface PHFigDecoder : PHImageDecoder
- (id)decodeImageFromData:orFileURL:options:completion:;
- (void)cancelInFlightAsyncDecodeForRequestHandle:;
+ (id)sharedDecoder;
@end
