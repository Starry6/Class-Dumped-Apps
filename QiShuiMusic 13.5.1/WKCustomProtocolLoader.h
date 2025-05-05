@interface WKCustomProtocolLoader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)connection:didReceiveData:;
- (void).cxx_destruct;
- (void)connection:didReceiveResponse:;
- (void)connectionDidFinishLoading:;
- (id).cxx_construct;
- (void)connection:didFailWithError:;
- (id)connection:willSendRequest:redirectResponse:;
- (id)connection:willCacheResponse:;
- (id)initWithLegacyCustomProtocolManagerProxy:customProtocolID:request:;
@end
