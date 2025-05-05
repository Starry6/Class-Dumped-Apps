@interface CAStateAddAnimation : CAStateElement
@property (nonatomic) NSString key;
@property (nonatomic) CAAnimation animation;
- (void)dealloc;
- (id)key;
- (void)setAnimation:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)setKey:;
- (void)encodeWithCoder:;
- (id)animation;
- (void)encodeWithCAMLWriter:;
- (id)keyPath;
- (BOOL)matches:;
- (void)apply:;
- (id)CAMLTypeForKey:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
