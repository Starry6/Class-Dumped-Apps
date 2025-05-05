@interface LNTypeDisplayRepresentation : NSObject
@property (nonatomic) LNStaticDeferredLocalizedString name;
@property (nonatomic) LNStaticDeferredLocalizedString numericFormat;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)numericFormat;
- (id)initWithName:numericFormat:;
+ (BOOL)supportsSecureCoding;
@end
