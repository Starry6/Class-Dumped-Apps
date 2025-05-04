@interface AWEIMConversationLocalImageCache : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) NSDictionary ABConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)readCacheWithImageName:bundleName:;
- (BOOL)writeCache:imageName:bundleName:;
- (id)p_generateMainCache;
- (id)p_keyForImageName:bundleName:;
- (void)p_trackWay:withImageName:bundleName:resultImage:extra:;
- (BOOL)p_shouldCacheImage:;
- (unsigned long long)p_memoryCostOfUIImage:;
- (BOOL)p_shouldTrack;
- (void)conWillAppear;
- (void)conWillDisappear;
- (void)conWillDealloc;
- (id)ABConfig;
- (void)setABConfig:;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void)setEnabled:;
- (BOOL)enabled;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
