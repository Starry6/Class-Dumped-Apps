@interface NWL2InterfaceQueueStats : NSObject
@property (nonatomic) NSInteger interfaceType;
@property (nonatomic) NSString interfaceName;
@property (nonatomic) C slot;
@property (nonatomic) Q averageQueueDelay;
@property (nonatomic) Q minimumQueueDelay;
@property (nonatomic) Q maximumQueueDelay;
- (unsigned char)slot;
- (void)setInterfaceType:;
- (int)interfaceType;
- (void)setInterfaceName:;
- (void)setSlot:;
- (void).cxx_destruct;
- (id)description;
- (id)interfaceName;
- (unsigned long long)averageQueueDelay;
- (void)setAverageQueueDelay:;
- (unsigned long long)minimumQueueDelay;
- (void)setMinimumQueueDelay:;
- (unsigned long long)maximumQueueDelay;
- (void)setMaximumQueueDelay:;
+ (id)interfaceQueueStatsSlotToString:;
@end
