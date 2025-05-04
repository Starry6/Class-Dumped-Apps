@interface AWEECOMIMResourceCleanHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pigeonCachePath;
- (void)cleanPigeonCache;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:;
- (double)cleanSizeWithStrategy:;
+ (id)sharedHelper;
@end
