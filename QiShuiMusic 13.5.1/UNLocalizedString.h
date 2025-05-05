@interface UNLocalizedString : NSString
@property (nonatomic) NSString key;
@property (nonatomic) NSArray arguments;
@property (nonatomic) NSString value;
- (id)init;
- (id)arguments;
- (Class)classForKeyedArchiver;
- (unsigned short)characterAtIndex:;
- (id)key;
- (void)getCharacters:range:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)un_localizedStringArguments;
- (id)un_localizedStringKey;
- (void)encodeWithCoder:;
- (id)_initWithKey:arguments:value:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (unsigned long long)length;
- (Class)classForCoder;
- (BOOL)_allowsDirectEncoding;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)un_localizedStringValue;
+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:arguments:value:;
@end
