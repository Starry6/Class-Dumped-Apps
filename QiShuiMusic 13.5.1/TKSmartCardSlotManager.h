@interface TKSmartCardSlotManager : NSObject
@property (nonatomic) NSArray slotNames;
- (id)init;
- (id)initWithServer:;
- (void)dealloc;
- (BOOL)setupConnection;
- (void).cxx_destruct;
- (void)getSlotWithName:reply:;
- (void)setSlotWithName:endpoint:type:reply:;
- (id)slotNames;
- (id)slotNamed:;
+ (id)defaultManager;
@end
