@interface UIPrinterDestination : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSData txtRecord;
- (id)initWithURL:;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setURL:;
- (id)URL;
- (id)txtRecord;
- (void)setTxtRecord:;
+ (BOOL)supportsSecureCoding;
@end
