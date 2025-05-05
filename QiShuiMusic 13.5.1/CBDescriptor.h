@interface CBDescriptor : CBAttribute
@property (nonatomic) CBCharacteristic characteristic;
@property (nonatomic) @ value;
@property (nonatomic) CBPeripheral peripheral;
@property (nonatomic) NSNumber handle;
- (id)peripheral;
- (id)handle;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (void)invalidate;
- (id)characteristic;
- (void)setCharacteristic:;
- (id)handleValueUpdated:;
- (id)handleValueWritten:;
- (id)initWithCharacteristic:dictionary:;
@end
