@interface INCustomObject : INObject
@property (nonatomic) INCodable _backingStore;
@property (nonatomic) INCodableDescription codableDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:;
- (void)encodeWithCoder:;
- (void)setValue:forUndefinedKey:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)_isValidKey:;
- (id)_initWithCodableDescription:;
- (id)initWithObject:codableDescription:;
- (id)initWithIntent:parameterName:reference:;
- (id)codableDescription;
- (id)_backingStore;
- (void)_setBackingStore:;
+ (BOOL)supportsSecureCoding;
@end
