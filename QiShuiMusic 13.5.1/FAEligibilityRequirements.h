@interface FAEligibilityRequirements : NSObject
- (id)initWithPropertyRequirements:;
- (id)init;
- (id)initWithCoder:;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)requirementsForPropertyName:;
+ (BOOL)supportsSecureCoding;
@end
