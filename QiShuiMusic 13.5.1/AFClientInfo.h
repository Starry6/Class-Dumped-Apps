@interface AFClientInfo : NSObject
@property (nonatomic) NSInteger processIdentifier;
@property (nonatomic) NSString processName;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (id)processName;
- (void)encodeWithCoder:;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithProcessIdentifier:processName:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
