@interface PPSourceMetadata : NSObject
@property (nonatomic) I dwellTimeSeconds;
@property (nonatomic) I lengthSeconds;
@property (nonatomic) I lengthCharacters;
@property (nonatomic) S donationCount;
@property (nonatomic) S contactHandleCount;
@property (nonatomic) C flags;
@property (nonatomic) NSSet featureNames;
- (id)init;
- (unsigned int)lengthSeconds;
- (id)featureValueForName:;
- (unsigned short)contactHandleCount;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)featureNames;
- (void)encodeWithCoder:;
- (id)initWithDwellTimeSeconds:lengthSeconds:lengthCharacters:donationCount:contactHandleCount:flags:;
- (unsigned int)dwellTimeSeconds;
- (BOOL)isEqualToSourceMetadata:;
- (id)description;
- (unsigned short)donationCount;
- (unsigned char)flags;
- (unsigned int)lengthCharacters;
- (BOOL)isEqual:;
- (id)initWithFlags:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
