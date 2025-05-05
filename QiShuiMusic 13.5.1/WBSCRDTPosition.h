@interface WBSCRDTPosition : NSObject
@property (nonatomic) NSArray sortValues;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSortValues:;
- (id)initWithSortValue:parentSortValues:;
- (id)sortValues;
+ (BOOL)supportsSecureCoding;
+ (id)positionBetweenPosition:andPosition:withDeviceIdentifier:changeID:;
@end
