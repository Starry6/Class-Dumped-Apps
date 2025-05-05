@interface PHImageIODecoder : PHImageDecoder
- (id)init;
- (id)decodeImageFromData:orFileURL:options:completion:;
- (void)cancelInFlightAsyncDecodeForRequestHandle:;
- (void).cxx_destruct;
- (id)decodeImageFromData:orFileURL:options:existingRequestHandle:completion:;
+ (id)sharedDecoder;
+ (long long)maxConcurrentDecodeCount;
+ (void)setMaxConcurrentDecodeCount:;
@end
