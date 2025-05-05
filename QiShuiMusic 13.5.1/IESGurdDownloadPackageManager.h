@interface IESGurdDownloadPackageManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> downloadSerialQueue;
@property (nonatomic) IESGurdDownloadOperationsQueue downloadOperationsQueue;
@property (nonatomic) NSMutableDictionary downloadResultsDictionary;
@property (nonatomic) IESGurdBaseDownloadOperation downloadingOperation;
- (void)cancelDownloadWithAccessKey:channel:;
- (void)downloadIfNeededDispatch;
- (id)downloadOperationsQueue;
- (void)downloadPackageWithConfig:resultBlock:;
- (id)downloadResultsDictionary;
- (id)downloadSerialQueue;
- (id)downloadingOperation;
- (void)enqueueDownloadFullPackageOperationWithConfig:completion:;
- (void)enqueueDownloadPatchPackageOperationWithConfig:completion:;
- (int)getTaskRemain;
- (void)setDownloadOperationsQueue:;
- (void)setDownloadResultsDictionary:;
- (void)setDownloadSerialQueue:;
- (void)setDownloadingOperation:;
- (void).cxx_destruct;
- (void)downloadIfNeeded;
+ (void)downloadResourceWithModel:completion:;
+ (void)downloadResourcesWithModels:;
+ (void)downloadResourcesWithModels:callback:;
+ (void)fallbackToFull:completion:;
+ (id)sharedManager;
@end
