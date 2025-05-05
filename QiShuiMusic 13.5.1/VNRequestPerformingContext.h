@interface VNRequestPerformingContext : NSObject
@property (nonatomic) Q serialNumber;
@property (nonatomic) VNSession session;
- (unsigned long long)serialNumber;
- (void)recordSequencedObservationsOfRequest:;
- (id)cachedObservationsAcceptedByRequest:;
- (id)previousSequencedObservationsAcceptedByRequest:;
- (id)imageBufferAndReturnError:;
- (unsigned int)qosClass;
- (id)requestForensics;
- (BOOL)cacheObservationsOfRequest:;
- (id)_observationsCacheKeyForRequest:;
- (id)session;
- (void).cxx_destruct;
- (id)requestPerformerAndReturnError:;
- (id)initWithSession:requestPerformer:imageBuffer:forensics:observationsCache:qosClass:;
- (id)initWithSession:requestPerformer:imageBuffer:forensics:observationsCache:;
@end
