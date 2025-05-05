@interface EDUserNotificationMailboxCutoffController : NSObject
@property (nonatomic) NSMutableDictionary mailboxCutoffs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)cutoffDateForMailbox:;
- (BOOL)isMessageAboveMailboxCutoff:;
- (void)updateCutoffForMailboxesWithMessages:;
- (void)clearCutoffForMailbox:;
- (BOOL)_shouldUpdateCutoffForMessage:;
- (BOOL)_updateCutoffForMailbox:date:;
- (void)_initializeIfNeeded;
- (void)_readFromDefaults;
- (void)_writeToDefaults;
- (id)mailboxCutoffs;
- (void)setMailboxCutoffs:;
+ (id)log;
@end
