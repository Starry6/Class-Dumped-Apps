@interface VKCRemoveBackgroundRequestHandler : NSObject
- (void)cancelRequest:;
- (void)cancelAllRequests;
- (id)init;
- (void)performRequest:completion:;
- (void).cxx_destruct;
- (BOOL)isValidRequest:error:;
+ (BOOL)isSupported;
+ (double)maxLength;
+ (double)maxAspectRatio;
+ (double)minAspectRatio;
+ (double)maxResolution;
@end
