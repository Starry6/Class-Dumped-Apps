@interface NSTextCheckingKeyEvent : NSObject
@property (nonatomic) q keyboardLayoutType;
@property (nonatomic) Q keyboardType;
@property (nonatomic) NSString keyboardLayoutIdentifier;
@property (nonatomic) NSString primaryLanguage;
@property (nonatomic) Q flags;
@property (nonatomic) double timestamp;
@property (nonatomic) NSString characters;
@property (nonatomic) NSString charactersIgnoringModifiers;
- (unsigned long long)keyboardType;
- (void)dealloc;
- (id)primaryLanguage;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (double)timestamp;
- (id)characters;
- (id)description;
- (unsigned long long)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithKeyboardLayoutType:keyboardType:identifier:primaryLanguage:flags:timestamp:characters:charactersIgnoringModifiers:;
- (long long)keyboardLayoutType;
- (id)keyboardLayoutIdentifier;
- (id)charactersIgnoringModifiers;
+ (BOOL)supportsSecureCoding;
@end
