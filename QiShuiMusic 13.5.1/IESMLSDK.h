@interface IESMLSDK : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearAllCachedResource;
- (void)downloadTaskWithURL:destination:progress:completionHandler:;
- (void)logWithLevel:fileName:line:func:log:;
- (void)prepareForSR;
- (void)reportWithService:params:;
- (id)resourceStoragePath;
- (BOOL)setupLensWithURL:completion:;
- (void)setupWithLocalURL:completion:;
- (void)setupWithURL:completion:;
- (BOOL)unzipFileAtPath:toDestination:;
+ (id)sharedInstance;
@end
