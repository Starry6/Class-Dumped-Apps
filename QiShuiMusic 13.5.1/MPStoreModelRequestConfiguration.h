@interface MPStoreModelRequestConfiguration : NSObject
@property (nonatomic) NSURLRequest URLRequest;
@property (nonatomic) NSArray URLRequests;
@property (nonatomic) NSArray requestedItemIdentifiers;
@property (nonatomic) Q itemMetadataRequestReason;
@property (nonatomic) q type;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithURLRequest:;
- (id)URLRequest;
- (id)initWithURLRequests:;
- (id)initWithRequestedItemIdentifiers:reason:;
- (id)URLRequests;
- (id)requestedItemIdentifiers;
- (unsigned long long)itemMetadataRequestReason;
@end
