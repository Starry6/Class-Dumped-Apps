@interface PLCacheDeleteClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> cacheDeleteQueryQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
@property (nonatomic) NSString pathForVolume;
@property (nonatomic) NSString cacheDeleteVolume;
@property (nonatomic) NSByteCountFormatter byteFormatter;
@property (nonatomic) ^{CacheDeleteToken=} currentCacheDeletePurgeToken;
- (id)callbackQueue;
- (void).cxx_destruct;
- (void)requestDiskSpaceAvailabilityOfSize:completion:;
- (void)cancelDiskSpaceAvailabilityRequest;
- (id)initWithQoSClass:pathForVolume:callbackQueue:;
- (id)cacheDeleteVolume;
- (id)_queryAvailableSpace;
- (void)_notifyDiskAvailabilityRequestCompletionHandler:withSuccess:numBytesPurged:additionalBytesRequired:error:;
- (id)cacheDeleteQueryQueue;
- (id)pathForVolume;
- (id)byteFormatter;
- (id)currentCacheDeletePurgeToken;
- (void)setCurrentCacheDeletePurgeToken:;
+ (BOOL)hasEntitlementsForCacheDelete;
@end
