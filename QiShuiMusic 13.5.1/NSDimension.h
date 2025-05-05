@interface NSDimension : NSUnit
@property (nonatomic) Q specifier;
@property (nonatomic) NSString icuSubtype;
@property (nonatomic) NSUnitConverter converter;
- (void)dealloc;
- (id)dimension;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)specifier;
- (BOOL)isEqual:;
- (id)converter;
- (id)initWithSymbol:converter:;
- (id)icuSubtype;
- (id)initWithSpecifier:symbol:converter:;
+ (BOOL)supportsSecureCoding;
+ (id)baseUnit;
+ (BOOL)supportsRegionalPreference;
+ (id)icuType;
+ (id)_measurementWithNaturalScale:system:;
@end
