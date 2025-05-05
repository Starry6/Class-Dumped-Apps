@interface MFSMTPDelivery : MFMailDelivery
- (void)setAccount:;
- (void)_openConnection;
- (void).cxx_destruct;
- (Class)deliveryClass;
- (id)deliverMessageData:toRecipients:;
+ (id)log;
@end
