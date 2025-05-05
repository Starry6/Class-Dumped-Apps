@interface CBMutableService : CBService
@property (nonatomic) NSNumber ID;
@property (nonatomic) NSArray includedServices;
@property (nonatomic) NSArray characteristics;
- (void)setID:;
- (id)ID;
- (void)dealloc;
- (id)initWithDictionary:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithType:primary:;
- (void).cxx_destruct;
- (void)handlePowerNotOn;
- (id)description;
@end
