@interface AWEScreenCastItemRequestService : NSObject
@property (nonatomic) TTVideoEngineInfoFetcher infoFetcher;
@property (nonatomic) AWEScreenCastItemRequest curRequest;
@property (nonatomic) <AWEScreenCastItemRequestServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInfoFetcher:;
- (id)infoFetcher;
- (void)infoFetcherDidFinish:;
- (void)infoFetcherDidFinish:error:;
- (void)infoFetcherShouldRetry:;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:;
- (void)setCurRequest:;
- (void)fetchWithVideoID:token:businessToken:apiVersion:;
- (id)curRequest;
- (void)fetchCastItemWithRequest:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)v2VideoApiURL;
+ (id)videoURLV2ApiWithPlayAuthToken:;
@end
