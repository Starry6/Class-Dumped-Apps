@interface ISTagIcon : ISBindableIcon
@property (nonatomic) NSString tag;
@property (nonatomic) NSString tagClass;
@property (nonatomic) NSString baseType;
- (id)tag;
- (id)initWithMIMEType:;
- (id)initWithModelCode:;
- (id)initWithFileExtension:baseType:;
- (id)initWithCoder:;
- (id)initWithTag:tagClass:baseType:;
- (void)encodeWithCoder:;
- (id)makeResourceProvider;
- (id)tagClass;
- (id)_fallbackKey;
- (void).cxx_destruct;
- (id)initWithFileExtension:;
- (id)description;
- (id)baseType;
- (id)initWithTypeCode:;
+ (BOOL)supportsSecureCoding;
@end
