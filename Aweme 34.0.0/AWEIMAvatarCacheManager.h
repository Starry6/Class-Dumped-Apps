@interface AWEIMAvatarCacheManager : NSObject
@property (nonatomic) BOOL useCustomCache;
@property (nonatomic) BDImageCache customAvatarCache;
- (long long)optionAfterAppliedCacheStrategy:;
- (void)didReceiveAWECleanCacheNotification;
- (BOOL)useCustomCache;
- (id)customAvatarCache;
- (void)setUseCustomCache:;
- (void)setCustomAvatarCache:;
- (id)init;
- (id)imageCache;
- (void).cxx_destruct;
- (id)cacheName;
+ (id)defaultAvatarPlaceholder;
+ (BOOL)enableAvatarCacheOptV2;
+ (BOOL)enableIMCutomImageCache;
+ (id)sharedInstance;
+ (BOOL)enableCache;
@end
