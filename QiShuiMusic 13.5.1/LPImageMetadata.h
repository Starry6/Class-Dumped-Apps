@interface LPImageMetadata : NSObject
@property (nonatomic) I version;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString type;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSString accessibilityText;
- (id)_initWithDictionary:;
- (id)init;
- (unsigned int)version;
- (void)setType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (void)setSize:;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)URL;
- (id)size;
- (id)accessibilityText;
- (void)setAccessibilityText:;
+ (BOOL)supportsSecureCoding;
@end
