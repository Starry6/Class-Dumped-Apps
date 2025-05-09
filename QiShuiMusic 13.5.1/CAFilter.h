@interface CAFilter : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL cachesInputImage;
@property (nonatomic) BOOL accessibility;
- (void)setDefaults;
- (id)valueForKey:;
- (void)setValue:forKey:;
- (id)CA_copyRenderValue;
- (void)dealloc;
- (void)setName:;
- (BOOL)enabled;
- (id)initWithName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)type;
- (void)encodeWithCAMLWriter:;
- (void)setEnabled:;
- (void)setAccessibility:;
- (id)description;
- (id)name;
- (id)mutableCopyWithZone:;
- (id)CAMLTypeForKey:;
- (void)CAMLParser:setValue:forKey:;
- (id)initWithType:;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (BOOL)cachesInputImage;
- (void)setCachesInputImage:;
- (BOOL)isAccessibility;
+ (BOOL)automaticallyNotifiesObserversForKey:;
+ (void)CAMLParserStartElement:;
+ (BOOL)supportsSecureCoding;
+ (id)filterTypes;
+ (id)filterWithType:;
+ (id)filterWithName:;
@end
