@interface MTIDCloudKitPromiseManager : NSObject
@property (nonatomic) NSMutableDictionary dict;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
- (void)setCallbackQueue:;
- (id)callbackQueue;
- (void).cxx_destruct;
- (id)initWithCallbackQueue:;
- (id)dict;
- (void)setDict:;
- (id)waitForRecordToSync:timeout:;
- (void)finishPromisesOfRecord:;
@end
