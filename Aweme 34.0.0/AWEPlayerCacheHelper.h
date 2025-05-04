@interface AWEPlayerCacheHelper : NSObject
+ (BOOL)isH264Video:;
+ (void)streamEditCacheFromPlayerWithAweme:destURL:enterFrom:forceCopy:completion:;
+ (void)cacheFromPlayerWithAweme:destURL:enterFrom:completion:;
+ (void)getLocalH264VideoCacheFromAweme:destURL:completion:;
+ (void)handlerSuccessCaseWithAweme:destURL:enterFrom:forceCopy:completion:playerCacheStrategy:;
+ (void)handlerFailedCaseWithAweme:destURL:enterFrom:forceCopy:completion:playerCacheStrategy:error:;
+ (BOOL)copyCacheFileToDestination:destinationURL:;
@end
