@interface AVAssetResourceLoadingDataRequest : NSObject
@property (nonatomic) q requestedOffset;
@property (nonatomic) q requestedLength;
@property (nonatomic) BOOL requestsAllDataToEndOfResource;
@property (nonatomic) q currentOffset;
- (id)init;
- (void)dealloc;
- (long long)currentOffset;
- (id)initWithLoadingRequest:requestedOffset:requestedLength:requestsAllDataToEndOfResource:canSupplyIncrementalDataImmediately:;
- (long long)requestedOffset;
- (id)description;
- (BOOL)requestsAllDataToEndOfResource;
- (long long)requestedLength;
- (void)respondWithData:;
- (id)_loadingRequest;
- (id)_requestInfo;
@end
