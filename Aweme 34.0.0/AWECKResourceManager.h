@interface AWECKResourceManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:;
- (void)log:type:;
- (id)commonResourceCacheDir;
- (void)configCommonResourceParam;
- (id)init;
+ (BOOL)isAppStoreChannel;
+ (void)configCKResource;
+ (void)configAB;
+ (void)configDavinciResource;
+ (id)sharedManager;
@end
