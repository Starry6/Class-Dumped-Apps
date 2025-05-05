@interface CAStateAddElement : CAStateElement
@property (nonatomic) NSString keyPath;
@property (nonatomic) @ object;
@property (nonatomic) @ beforeObject;
- (void)setObject:;
- (void)dealloc;
- (void)foreachLayer:;
- (BOOL)CAMLTypeSupportedForKey:;
- (id)initWithCoder:;
- (id)debugDescription;
- (id)beforeObject;
- (void)encodeWithCoder:;
- (void)setKeyPath:;
- (void)encodeWithCAMLWriter:;
- (id)keyPath;
- (id)object;
- (BOOL)matches:;
- (void)apply:;
- (void)setBeforeObject:;
- (id)CAMLTypeForKey:;
- (void)CAMLParser:setValue:forKey:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
