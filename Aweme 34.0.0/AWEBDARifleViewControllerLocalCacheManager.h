@interface AWEBDARifleViewControllerLocalCacheManager : NSObject
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) AWEBDARifleViewController rifleViewController;
- (id)lynxSchema;
- (void)setLynxSchema:;
- (id)fetchRifleViewInLocalCacheWithLynxSchema:;
- (void)saveRifleViewInLocalCache:WithLynxSchema:;
- (void)setRifleViewController:;
- (id)rifleViewController;
- (void)clearCache;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
