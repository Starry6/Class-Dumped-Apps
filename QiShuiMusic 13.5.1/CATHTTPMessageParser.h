@interface CATHTTPMessageParser : NSObject
@property (nonatomic) <CATHTTPMessageParserDelegate> delegate;
- (void)dealloc;
- (BOOL)appendBytes:length:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)delegateDidReceiveRequestData:;
- (void)delegateDidReceiveResponseData:moreComing:;
- (void)delegateDidReceiveRequestWithURL:;
+ (id)encodeRequestData:;
+ (id)responseHeaderForContentWithLength:;
@end
