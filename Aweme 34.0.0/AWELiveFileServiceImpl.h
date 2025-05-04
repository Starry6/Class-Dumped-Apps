@interface AWELiveFileServiceImpl : NSObject
@property (nonatomic) <AWEStorageServiceFileKitFileManagerInterface> fileManager;
@property (nonatomic) NSMutableDictionary pathResourceMetric;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPathResourceMetric:;
- (id)pathResourceMetric;
- (id)loadResourceMetrics:;
- (void)resourceAccess:rootPath:;
- (void)resourceRemove:rootPath:;
- (void)resourceCreate:rootPath:;
- (void)resourceUpdate:rootPath:;
- (id)init;
- (id)fileManager;
- (void)setFileManager:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
