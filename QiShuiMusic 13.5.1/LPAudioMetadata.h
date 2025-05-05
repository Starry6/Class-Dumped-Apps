@interface LPAudioMetadata : NSObject
@property (nonatomic) I version;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString type;
@property (nonatomic) NSString accessibilityText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_initWithDictionary:;
- (id)init;
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
