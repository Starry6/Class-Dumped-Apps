@interface BDWWeakScriptMessageHandler : NSObject
@property (nonatomic) WKUserContentController delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)userContentController:didReceiveScriptMessage:;
@end
