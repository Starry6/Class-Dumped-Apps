@interface AFExperimentGroup : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q allocation;
@property (nonatomic) NSDictionary properties;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)identifier;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (unsigned long long)allocation;
- (void)encodeWithCoder:;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:allocation:properties:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
