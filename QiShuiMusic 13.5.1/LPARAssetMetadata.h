@interface LPARAssetMetadata : NSObject
@property (nonatomic) I version;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString type;
@property (nonatomic) NSString accessibilityText;
- (id)_initWithDictionary:;
- (id)init;
- (id)_initWithURL:;
- (unsigned int)version;
- (void)setType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)URL;
- (id)accessibilityText;
- (void)setAccessibilityText:;
+ (BOOL)supportsSecureCoding;
@end
