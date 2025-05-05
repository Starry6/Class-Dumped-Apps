@interface UIPencilEvent : UIEvent
@property (nonatomic) NSHashTable trackedInteractions;
- (long long)subtype;
- (id)trackedInteractions;
- (void)registerInteraction:;
- (void)_sendEventToInteractions;
- (id)collectAllActiveInteractions;
- (long long)type;
- (void)deregisterAllInteractionsForWindow:;
- (void).cxx_destruct;
- (id)_init;
- (void)deregisterInteraction:;
- (void)setTrackedInteractions:;
@end
