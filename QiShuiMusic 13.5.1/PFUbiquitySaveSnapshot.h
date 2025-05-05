@interface PFUbiquitySaveSnapshot : NSObject
- (void)dealloc;
- (id)description;
- (id)initWithTransactionLog:;
- (id)initWithSaveNotification:withLocalPeerID:;
@end
