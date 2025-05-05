@interface CAValueFunction : NSObject
@property (nonatomic) NSString name;
- (id)_initWithName:;
- (id)CA_copyRenderValue;
- (void)dealloc;
- (unsigned long long)inputCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)encodeWithCAMLWriter:;
- (id)name;
- (unsigned long long)outputCount;
- (BOOL)apply:result:;
- (BOOL)apply:result:parameterFunction:context:;
+ (void)CAMLParserStartElement:;
+ (BOOL)supportsSecureCoding;
+ (id)functionWithName:;
@end
