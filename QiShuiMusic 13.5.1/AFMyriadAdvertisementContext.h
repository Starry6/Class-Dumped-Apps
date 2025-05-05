@interface AFMyriadAdvertisementContext : NSObject
@property (nonatomic) Q generation;
@property (nonatomic) NSData contextData;
@property (nonatomic) double contextFetchDelay;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)contextData;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)generation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithGeneration:contextData:contextFetchDelay:;
- (double)contextFetchDelay;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
