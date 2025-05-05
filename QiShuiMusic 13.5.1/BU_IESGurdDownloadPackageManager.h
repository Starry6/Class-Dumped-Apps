@interface BU_IESGurdDownloadPackageManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> downloadSerialQueue;
@property (nonatomic) NSOperationQueue downloadOperationQueue;
@property (nonatomic) NSMutableDictionary downloadResultsDictionary;
@property (nonatomic) NSMapTable taskMapTable;
- (BOOL)canDownloadPatchPackageForAccessKey:config:;
- (void)cancelDownloadWithAk:channel:;
- (void)downloadFullPackageForAccessKey:config:resultBlock:;
- (id)downloadOperationQueue;
- (void)downloadPackageForAccessKey:config:resultBlock:;
- (void)downloadPatchPackageForAccessKey:config:resultBlock:;
- (id)downloadResultsDictionary;
- (id)downloadSerialQueue;
- (void)setDownloadOperationQueue:;
- (void)setDownloadResultsDictionary:;
- (void)setDownloadSerialQueue:;
- (void)setTaskMapTable:;
- (id)taskMapTable;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
