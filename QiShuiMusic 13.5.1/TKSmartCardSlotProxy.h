@interface TKSmartCardSlotProxy : NSObject
@property (nonatomic) NSHashTable cards;
- (id)initWithSlot:;
- (void).cxx_destruct;
- (void)notifyWithParameters:reply:;
- (void)cardSessionRequested;
- (id)cards;
@end
