@interface DKDAAPParser : NSObject
@property (nonatomic) NSInputStream inputStream;
@property (nonatomic) NSMutableArray containerStack;
@property (nonatomic) BOOL canceled;
@property (nonatomic) <DKDAAPParserDelegate> delegate;
@property (nonatomic) q state;
- (BOOL)isCanceled;
- (id)inputStream;
- (id)containerStack;
- (BOOL)_callDelegateShouldParseCode:;
- (void)cancel;
- (void)_callDelegateDidCancel;
- (void)setDelegate:;
- (void)_verifyExpectedEOF;
- (BOOL)_callDelegateShouldParseCodeAsContainer:;
- (void)parse;
- (void)_callDelegateDidEndContainerCode:;
- (void)_callDelegateDidFinish;
- (long long)state;
- (id)delegate;
- (id)initWithData:;
- (void).cxx_destruct;
- (void)_callDelegateDidFailWithError:;
- (void)_callDelegateDidParseDataCode:bytes:contentLength:;
- (id)initWithStream:;
- (void)_callDelegateDidStart;
- (void)setCanceled:;
- (void)_callDelegateDidStartContainerCode:contentLength:;
@end
