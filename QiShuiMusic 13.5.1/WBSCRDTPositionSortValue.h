@interface WBSCRDTPositionSortValue : NSObject
@property (nonatomic) q sortValue;
@property (nonatomic) NSString deviceIdentifier;
@property (nonatomic) q changeID;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)init;
- (id)deviceIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (long long)changeID;
- (void)encodeWithCoder:;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)sortValue;
- (id)initWithSortValue:deviceIdentifier:changeID:;
- (BOOL)isEqualToPositionSortValue:;
- (id)positionSortValueWithSortValue:;
- (id)positionSortValueWithChangeID:;
+ (BOOL)supportsSecureCoding;
@end
