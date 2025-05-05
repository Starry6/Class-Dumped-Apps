@interface AKTrustedPhoneNumber : NSObject
@property (nonatomic) NSNumber identifier;
@property (nonatomic) NSString number;
@property (nonatomic) NSString numberWithDialCode;
@property (nonatomic) NSString obfuscatedNumber;
@property (nonatomic) NSString pushMode;
- (id)number;
- (id)identifier;
- (void)setNumber:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)initWithJSONDictionary:;
- (id)numberWithDialCode;
- (void)setNumberWithDialCode:;
- (id)obfuscatedNumber;
- (void)setObfuscatedNumber:;
- (id)pushMode;
- (void)setPushMode:;
@end
