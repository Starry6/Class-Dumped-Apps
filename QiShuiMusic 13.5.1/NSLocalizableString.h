@interface NSLocalizableString : NSString
@property (nonatomic) NSString stringsFileKey;
@property (nonatomic) NSString developmentLanguageString;
- (unsigned short)HMDP_characterAtIndex:;
- (void)dealloc;
- (id)awakeAfterUsingCoder:;
- (unsigned short)characterAtIndex:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)length;
- (Class)classForCoder;
- (id)copyWithZone:;
- (id)initWithStringsFileKey:developmentLanguageString:;
- (id)stringsFileKey;
- (void)setStringsFileKey:;
- (id)developmentLanguageString;
- (void)setDevelopmentLanguageString:;
+ (BOOL)supportsSecureCoding;
+ (id)localizableStringWithStringsFileKey:developmentLanguageString:;
@end
