@interface NSUnit : NSObject
@property (nonatomic) # _effectiveUnitClass;
@property (nonatomic) NSString symbol;
- (id)_intents_stringRepresentation;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (id)symbol;
- (Class)_effectiveUnitClass;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithSymbol:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
