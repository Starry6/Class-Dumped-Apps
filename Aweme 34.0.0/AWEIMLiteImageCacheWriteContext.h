@interface AWEIMLiteImageCacheWriteContext : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSString imageName;
@property (nonatomic) NSString bundleName;
@property (nonatomic) BOOL forceCache;
- (void)setForceCache:;
- (BOOL)forceCache;
- (id)image;
- (id)bundleName;
- (void)setImage:;
- (void)setImageName:;
- (void)setBundleName:;
- (void).cxx_destruct;
- (id)imageName;
@end
