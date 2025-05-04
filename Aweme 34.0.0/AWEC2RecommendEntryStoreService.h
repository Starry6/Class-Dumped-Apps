@interface AWEC2RecommendEntryStoreService : HTSService
@property (nonatomic) BOOL switchState;
@property (nonatomic) BOOL showState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowState:;
- (void)setShowDoubleColumnEntry:;
- (BOOL)isShowDoubleColumnEntry;
- (BOOL)isDoubleColumnEntrySwitchON;
- (void)setDoubleColumnEntrySwitch:;
- (id)init;
- (BOOL)showState;
- (void)setSwitchState:;
- (BOOL)switchState;
@end
