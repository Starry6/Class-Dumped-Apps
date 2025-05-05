@interface PPNamedEntityMetadata : NSObject
@property (nonatomic) S impressionCount;
@property (nonatomic) S occurrencesInSource;
@property (nonatomic) NSSet featureNames;
- (unsigned short)impressionCount;
- (id)init;
- (id)featureValueForName:;
- (id)initWithImpressionCount:occurrencesInSource:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned short)occurrencesInSource;
- (id)featureNames;
- (void)encodeWithCoder:;
- (BOOL)isEqualToNamedEntityMetadata:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
