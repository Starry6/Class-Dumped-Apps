@interface IESLiveToolbarSlotConfig : NSObject
@property (nonatomic) Q maxSlotCount;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString slotFileName;
@property (nonatomic) NSArray slots;
- (void)constructWithFile:;
- (id)dictForJsonFile:;
- (void)matchConstruct;
- (unsigned long long)maxSlotCount;
- (id)removeLowPrioritySlotIfNeed:withTrackParam:;
- (void)setMaxSlotCount:;
- (void)setSlotFileName:;
- (id)slotFileName;
- (id)slotForItem:;
- (id)slotForName:;
- (id)slotNameArray;
- (id)slotsFilterWith:;
- (id)fileName;
- (id)initWithFileName:;
- (void).cxx_destruct;
- (void)setFileName:;
- (id)slots;
- (void)setSlots:;
+ (id)instanceWithFileName:;
@end
