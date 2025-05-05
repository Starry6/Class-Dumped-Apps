@interface PHImageDecoder : NSObject
- (id)decodeImageFromData:orFileURL:options:completion:;
- (void)cancelInFlightAsyncDecodeForRequestHandle:;
+ (id)sharedDecoder;
+ (id)sharedFigDecoder;
@end
