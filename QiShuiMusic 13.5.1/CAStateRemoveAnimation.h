@interface CAStateRemoveAnimation : CAStateElement
@property (nonatomic) NSString key;
- (void)dealloc;
- (id)key;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void)encodeWithCAMLWriter:;
- (id)keyPath;
- (BOOL)matches:;
- (void)apply:;
- (id)CAMLTypeForKey:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
