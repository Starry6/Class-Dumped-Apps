@interface CAStateSetValue : CAStateElement
@property (nonatomic) NSString keyPath;
@property (nonatomic) @ value;
- (void)dealloc;
- (void)foreachLayer:;
- (BOOL)CAMLTypeSupportedForKey:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void)setValue:;
- (void)setKeyPath:;
- (void)encodeWithCAMLWriter:;
- (id)keyPath;
- (BOOL)matches:;
- (id)value;
- (void)apply:;
- (id)CAMLTypeForKey:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
