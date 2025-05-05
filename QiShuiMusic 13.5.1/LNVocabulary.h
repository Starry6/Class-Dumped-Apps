@interface LNVocabulary : NSObject
@property (nonatomic) NSString term;
@property (nonatomic) NSDictionary traits;
- (id)traits;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)term;
- (id)initWithTerm:entityIdentifier:;
- (id)initWithTerm:traits:;
- (id)initWithTerm:appSettingName:;
- (id)initWithTerm:entityTypeName:;
+ (BOOL)supportsSecureCoding;
@end
