@interface BDNativeWebMessageHandler : NSObject
@property (nonatomic) <BDNativeWebMessageHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)userContentController:didReceiveScriptMessage:;
@end
