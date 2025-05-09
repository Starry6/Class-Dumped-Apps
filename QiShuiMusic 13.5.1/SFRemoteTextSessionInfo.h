@interface SFRemoteTextSessionInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q keyboardType;
@property (nonatomic) NSString prompt;
@property (nonatomic) q returnKeyType;
@property (nonatomic) NSDictionary rtiPayload;
@property (nonatomic) BOOL secureTextEntry;
@property (nonatomic) NSString text;
@property (nonatomic) NSString title;
- (void)setSecureTextEntry:;
- (long long)keyboardType;
- (void)setKeyboardType:;
- (BOOL)secureTextEntry;
- (long long)returnKeyType;
- (void)setReturnKeyType:;
- (void)setText:;
- (id)initWithDictionary:;
- (id)identifier;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setPrompt:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)prompt;
- (id)description;
- (id)dictionaryRepresentation;
- (id)text;
- (void)setIdentifier:;
- (id)initWithRTIPayload:;
- (id)rtiPayload;
- (void)setRtiPayload:;
+ (BOOL)supportsSecureCoding;
@end
