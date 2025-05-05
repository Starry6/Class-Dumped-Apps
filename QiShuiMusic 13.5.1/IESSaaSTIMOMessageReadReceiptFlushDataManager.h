@interface IESSaaSTIMOMessageReadReceiptFlushDataManager : NSObject
- (void)flushParticipantReadReceipts:inConversation:;
+ (id)sharedInstance;
@end
