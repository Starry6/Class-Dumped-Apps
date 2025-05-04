@interface AWEFeedSlideDislikeResourceManager : NSObject
- (id)lottiePath;
- (id)feedSlideDislikeUnselectedPath;
- (id)feedSlideDislikeSelectedPath;
- (id)feedSlideDislikeSelectedBGPath;
- (BOOL)lottiePathReady;
- (id)heartLottiePath;
- (BOOL)ready;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
