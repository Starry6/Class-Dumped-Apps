@interface SFB389NFCPromptConfiguration : NSObject
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString message;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString userMessage;
@property (nonatomic) NSUUID baUUID;
@property (nonatomic) Q promptState;
- (id)phoneNumber;
- (void)setMessage:;
- (void)setPhoneNumber:;
- (id)baUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)description;
- (void)setLocalizedTitle:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)userMessage;
- (void)setUserMessage:;
- (void)setBaUUID:;
- (unsigned long long)promptState;
- (void)setPromptState:;
+ (BOOL)supportsSecureCoding;
@end
