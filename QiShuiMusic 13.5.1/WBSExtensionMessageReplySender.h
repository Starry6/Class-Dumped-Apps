@interface WBSExtensionMessageReplySender : NSObject
- (void)dealloc;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)sendReplyIfNotAlreadySent:;
@end
