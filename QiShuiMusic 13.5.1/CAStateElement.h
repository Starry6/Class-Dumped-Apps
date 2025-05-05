@interface CAStateElement : NSObject
@property (nonatomic) CALayer target;
@property (nonatomic) CAStateElement source;
@property (nonatomic) NSString keyPath;
- (void)dealloc;
- (id)save;
- (void)foreachLayer:;
- (BOOL)CAMLTypeSupportedForKey:;
- (id)initWithCoder:;
- (void)setTarget:;
- (void)encodeWithCoder:;
- (void)encodeWithCAMLWriter:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)source;
- (id)target;
- (BOOL)matches:;
- (void)apply:;
- (id)CAMLTypeForKey:;
- (id)targetName;
- (void)setSource:;
- (void)CAMLParser:setValue:forKey:;
- (id)copyWithZone:;
+ (void)CAMLParserStartElement:;
+ (BOOL)supportsSecureCoding;
@end
