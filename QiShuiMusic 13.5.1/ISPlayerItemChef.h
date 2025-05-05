@interface ISPlayerItemChef : NSObject
@property (nonatomic) NSOperationQueue _operationQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> _isolationQueue;
@property (nonatomic) NSMutableDictionary _operationsByRequestID;
@property (nonatomic) q _currentRequestID;
- (id)init;
- (void).cxx_destruct;
- (id)_operationQueue;
- (id)_isolationQueue;
- (long long)_currentRequestID;
- (id)_operationsByRequestID;
- (long long)prepareIrisVideoWithAsset:photoTime:trimmedTimeRange:completion:;
- (long long)prepareIrisPlayerItemWithAsset:trimmedTimeRange:photoTime:includeVideo:includeAudio:completion:;
- (void)cancelPreparationOfIrisAssetWithRequestID:;
- (void)_setCurrentRequestID:;
+ (id)defaultChef;
@end
