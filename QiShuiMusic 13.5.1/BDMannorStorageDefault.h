@interface BDMannorStorageDefault : NSObject
@property (nonatomic) BDMannorStorageManger nonDeletableCache;
@property (nonatomic) BDMannorStorageManger deletableCache;
@property (nonatomic) NSString nonDeletableCachePath;
@property (nonatomic) NSString deletableCachePath;
- (id)deletableCache;
- (id)deletableCachePath;
- (id)nonDeletableCache;
- (id)nonDeletableCachePath;
- (void)setDeletableCache:;
- (void)setDeletableCachePath:;
- (void)setNonDeletableCache:;
- (void)setNonDeletableCachePath:;
- (void).cxx_destruct;
+ (id)deletableCache;
+ (id)nonDeletableCache;
+ (id)sharedInstance;
@end
