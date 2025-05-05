@interface LNSymbolImage : LNImage
@property (nonatomic) NSString systemName;
@property (nonatomic) NSData tintColorData;
@property (nonatomic) NSData configurationData;
@property (nonatomic) NSString platform;
@property (nonatomic) LNSymbolConfiguration platformAgnosticSymbolConfiguration;
- (id)initWithCoder:;
- (id)systemName;
- (void)encodeWithCoder:;
- (id)platform;
- (id)configurationData;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSymbolSystemName:;
- (id)initWithSymbolSystemName:tintColorData:configurationData:platform:;
- (id)initWithSymbolSystemName:tintColorData:platformAgnosticConfiguration:platform:;
- (id)proxiedImageCopy;
- (id)tintColorData;
- (id)platformAgnosticSymbolConfiguration;
+ (BOOL)supportsSecureCoding;
@end
