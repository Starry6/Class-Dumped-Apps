@interface QLCustomMessageForwarder : NSObject
- (void).cxx_destruct;
- (id)initWithPreviewDelegate:;
- (void)forwardMessageToHostOfCustomViewController:message:completionHandler:;
@end
