@interface MPSectionedIdentifierListEntryPositionKey : NSObject
@property (nonatomic) NSString deviceIdentifier;
@property (nonatomic) NSString generation;
- (void)setDeviceIdentifier:;
- (id)deviceIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)compare:;
- (void)setGeneration:;
- (void).cxx_destruct;
- (id)generation;
+ (BOOL)supportsSecureCoding;
+ (id)positionKeyWithDeviceIdentifier:generation:;
@end
