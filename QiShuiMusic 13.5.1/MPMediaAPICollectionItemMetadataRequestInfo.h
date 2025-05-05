@interface MPMediaAPICollectionItemMetadataRequestInfo : NSObject
@property (nonatomic) NSArray collectionItemRequests;
@property (nonatomic) NSArray tokenRenewalRequests;
@property (nonatomic) NSArray collectionRequests;
@property (nonatomic) Q totalRequestItemCount;
- (void).cxx_destruct;
- (id)initWithMediaAPICollectionItemMetadataRequests:collectionMetadataRequest:authTokenRenewalRequests:totalItemRequestCount:;
- (id)collectionItemRequests;
- (id)tokenRenewalRequests;
- (id)collectionRequests;
- (unsigned long long)totalRequestItemCount;
@end
