@interface AWELaunchImagePreloader : NSObject
@property (nonatomic) NSCache imageCache;
@property (nonatomic) NSMutableArray imageInfo;
@property (nonatomic) NSMutableArray emptyImageInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleMemoryWarning:;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)unusedImageInfoUpload;
- (void)unusedImageInfoRecord;
- (id)emptyImageInfo;
- (void)usedImageInfoUpload;
- (id)awe_preloadedImageNamed:inSearchBundleName:compatibleWithTraitCollection:;
- (void)preloadImage:;
- (void)setEmptyImageInfo:;
- (id)init;
- (void)setImageCache:;
- (id)imageCache;
- (void).cxx_destruct;
- (id)imageInfo;
- (void)setImageInfo:;
+ (id)fluencySlardarIssueOptConfig;
+ (BOOL)imAvataDefaultImgOptEnable;
+ (id)sharedInstance;
@end
