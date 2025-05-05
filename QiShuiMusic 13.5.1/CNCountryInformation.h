@interface CNCountryInformation : NSObject
@property (nonatomic) NSString isoCountryCode;
@property (nonatomic) NSString name;
@property (nonatomic) NSString phoneticName;
- (unsigned long long)hash;
- (id)isoCountryCode;
- (id)phoneticName;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithISOCountryCode:name:phoneticName:;
@end
