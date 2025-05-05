@interface AFMyriadGoodnessScoreOverrideState : NSObject
@property (nonatomic) q overrideOption;
@property (nonatomic) NSString reason;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)reason;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOverrideOption:reason:;
- (long long)overrideOption;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
