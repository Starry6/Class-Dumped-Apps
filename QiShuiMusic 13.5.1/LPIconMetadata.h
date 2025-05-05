@interface LPIconMetadata : NSObject
@property (nonatomic) I version;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString accessibilityText;
- (id)init;
- (id)_initWithURL:;
- (unsigned int)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)URL;
- (id)accessibilityText;
- (void)setAccessibilityText:;
+ (BOOL)supportsSecureCoding;
@end
