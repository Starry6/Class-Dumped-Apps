@interface IFImageBag : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableDictionary imagesByScale;
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSArray images;
- (id)init;
- (void)insertImage:;
- (id)images;
- (id)debugDescription;
- (id)lock;
- (void)setImagesByScale:;
- (id)initWithImages:;
- (void).cxx_destruct;
- (id)imageForSize:scale:;
- (id)imagesByScale;
- (id)imagesForScale:;
- (void)setLock:;
+ (id)defaultAppIconAssetsBag;
+ (id)defaultAppClipAssetsBag;
+ (id)imageBagWithResourcesNamed:fromBundle:;
+ (id)imageBagWithResourcesNames:fromBundle:;
+ (id)imageBagWithResourcesNamed:fromBundle:subdirectory:;
+ (id)imageBagWithResourcesNamed:directory:;
@end
