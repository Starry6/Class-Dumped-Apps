@interface WBSCRDTField : NSObject
@property (nonatomic) <NSCopying> value;
@property (nonatomic) WBSCRDTGeneration generation;
@property (nonatomic) NSString deviceIdentifier;
@property (nonatomic) BOOL shouldIncrementGeneration;
- (void)setDeviceIdentifier:;
- (void)incrementGenerationIfNeeded;
- (id)init;
- (id)deviceIdentifier;
- (void)setValue:incrementGenerationIfNeeded:;
- (long long)mergeWithField:;
- (id)initWithValue:valueProvider:valueUpdater:generation:deviceIdentifier:;
- (void)setObject:forKeyedSubscript:;
- (void)setValue:;
- (id)objectForKeyedSubscript:;
- (void)setShouldIncrementGeneration:;
- (id)initWithValue:generation:deviceIdentifier:;
- (BOOL)shouldIncrementGeneration;
- (void)setGeneration:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)initWithValueProvider:valueUpdater:generation:deviceIdentifier:;
- (id)generation;
- (id)copyWithZone:;
@end
