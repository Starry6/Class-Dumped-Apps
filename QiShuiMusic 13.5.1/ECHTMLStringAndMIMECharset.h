@interface ECHTMLStringAndMIMECharset : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) <ECMIMECharset> charset;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)string;
- (void).cxx_destruct;
- (id)initWithString:charset:;
- (id)charset;
+ (BOOL)supportsSecureCoding;
+ (id)mf_utf8HTMLStringWithString:;
@end
