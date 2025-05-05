@interface IESLiveLOTAnimationCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageForKey:;
- (void)setImage:forKey:;
+ (id)animationCacheForKey:;
+ (void)cacheLottieImage:forKey:;
+ (void)clearLottieAnimationCache;
+ (void)clearLottieImageCache;
+ (id)lottieImageForKey:;
+ (void)removeAnimationCacheForKey:;
+ (void)removeLottieImageCacheForKey:;
+ (id)sharedInstance;
@end
