@interface WebDownloadInternal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (void)downloadDidFinish:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)download:didFailWithError:;
- (void)downloadDidBegin:;
- (id)download:willSendRequest:redirectResponse:;
- (void)download:didReceiveAuthenticationChallenge:;
- (void)download:didReceiveResponse:;
- (void)download:didReceiveDataOfLength:;
- (BOOL)download:shouldDecodeSourceDataOfMIMEType:;
- (void)download:decideDestinationWithSuggestedFilename:;
- (void)download:didCreateDestination:;
- (void)setRealDelegate:;
@end
