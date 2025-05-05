@interface MPMediaAPICollectionItemMetadataRequest : NSObject
@property (nonatomic) BOOL shouldResolveRequestItemsLocally;
@property (nonatomic) NSUUID requestIdentifier;
@property (nonatomic) q requestItemCount;
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)requestIdentifier;
- (void)cancelRequest;
- (id)progress;
- (void).cxx_destruct;
- (void)executeRequestWithBatchProgressHandler:;
- (BOOL)shouldResolveRequestItemsLocally;
- (long long)requestItemCount;
- (void)_resolveRequestItemsWithSOD:;
- (id)_getNextBatchBatch;
- (void)_notifyBatchProgressWithResponseDictionary:tokenHalfLifeDuration:error:finalResponse:progressHandler:;
- (id)initWithItemIdentifiers:personID:requestContext:sparseRequest:trustProvider:;
- (void)_fetchContainerItemMetadataForBatch:progressHandler:;
@end
