@interface PIAManifestService : NSObject
@property (nonatomic) YYDiskCache storage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCacheManifestForURL:;
- (id)initService;
- (void)removeManifestForURL:;
- (void)saveManifest:forURL:;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
+ (void)executePrepareServiceTask;
@end
