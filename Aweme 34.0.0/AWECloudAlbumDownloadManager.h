@interface AWECloudAlbumDownloadManager : NSObject
@property (nonatomic) NSString taskKey;
@property (nonatomic) EcAsset asset;
@property (nonatomic) <AWECloudAlbumDownloadManagerDelegate> delegate;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskKey;
- (void)setTaskKey:;
- (void)taskItemChanges:;
- (void)taskProgressChanges:;
- (void)taskStateChanges:;
- (id)initWithAlbumId:asset:delegate:;
- (void)setIsRunning:;
- (id)delegate;
- (void)cancel;
- (void).cxx_destruct;
- (void)download;
- (void)setAsset:;
- (void)setDelegate:;
- (id)asset;
- (BOOL)isRunning;
+ (id)cacheDirectory;
@end
