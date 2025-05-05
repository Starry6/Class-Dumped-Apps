@interface MPMediaAPICollectionItemMetadataResponse : NSObject
@property (nonatomic) BOOL isFinalResponse;
@property (nonatomic) double playbackAuthorizationTokenHalfLifeExpiration;
@property (nonatomic) NSDictionary response;
@property (nonatomic) NSArray failedItemIdentifiers;
- (BOOL)isFinalResponse;
- (id)response;
- (void).cxx_destruct;
- (id)initWithMediaAPICollectionItemMetadataResponse:authorizationTokenHalfLifeDuration:failedItemIdentifiers:isFinalResponse:;
- (id)failedItemIdentifiers;
- (double)playbackAuthorizationTokenHalfLifeExpiration;
@end
