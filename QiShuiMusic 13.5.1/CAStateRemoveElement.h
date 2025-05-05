@interface CAStateRemoveElement : CAStateElement
@property (nonatomic) NSString keyPath;
@property (nonatomic) @ object;
- (void)setObject:;
- (void)dealloc;
- (BOOL)CAMLTypeSupportedForKey:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void)setKeyPath:;
- (void)encodeWithCAMLWriter:;
- (id)keyPath;
- (id)object;
- (BOOL)matches:;
- (void)apply:;
- (id)CAMLTypeForKey:;
- (void)CAMLParser:setValue:forKey:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
