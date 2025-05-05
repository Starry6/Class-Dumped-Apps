@interface NSAutoLocale : NSLocale
- (void)dealloc;
- (id)_prefForKey:;
- (void)_update:;
- (id)initWithCoder:;
- (id)initWithLocaleIdentifier:;
- (void)finalize;
- (void)encodeWithCoder:;
- (id)objectForKey:;
- (void)_setDoesNotRequireSpecialCaseHandling;
- (id)displayNameForKey:value:;
- (id)description;
- (id)_init;
- (Class)classForCoder;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
