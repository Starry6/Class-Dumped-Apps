@interface CSLocalizedString : NSString
@property (nonatomic) NSString defaultString;
@property (nonatomic) BOOL didTrySettingDefaultString;
@property (nonatomic) NSDictionary localizedStrings;
- (id)localizedString;
- (unsigned short)characterAtIndex:;
- (void)encodeWithCSCoder:;
- (void)getCharacters:range:;
- (id)initWithCoder:;
- (id)localizedStrings;
- (id)initWithLocalizedStrings:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)length;
- (BOOL)didTrySettingDefaultString;
- (id)defaultString;
- (void)setDidTrySettingDefaultString:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
