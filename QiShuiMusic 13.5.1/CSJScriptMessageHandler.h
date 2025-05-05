@interface CSJScriptMessageHandler : NSObject
@property (nonatomic) <WKScriptMessageHandler> realScriptMessageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)realScriptMessageHandler;
- (void)setRealScriptMessageHandler:;
- (id)initWithHandler:;
- (void).cxx_destruct;
- (void)userContentController:didReceiveScriptMessage:;
@end
