@interface CBService : CBAttribute
@property (nonatomic) BOOL isPrimary;
@property (nonatomic) NSArray includedServices;
@property (nonatomic) NSArray characteristics;
@property (nonatomic) NSNumber startHandle;
@property (nonatomic) NSNumber endHandle;
@property (nonatomic) CBPeripheral peripheral;
- (BOOL)isPrimary;
- (id)peripheral;
- (id)characteristics;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)setCharacteristics:;
- (void)setIsPrimary:;
- (id)handleIncludedServicesDiscovered:;
- (id)handleCharacteristicsDiscovered:;
- (id)initWithPeripheral:dictionary:;
- (id)includedServices;
- (void)setIncludedServices:;
- (id)startHandle;
- (id)endHandle;
@end
