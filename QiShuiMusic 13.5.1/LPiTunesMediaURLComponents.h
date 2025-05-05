@interface LPiTunesMediaURLComponents : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString storefrontCountryCode;
- (id)initWithURL:;
- (id)identifier;
- (void).cxx_destruct;
- (id)storefrontCountryCode;
+ (id)identifierFromQueryItems:pathComponent:;
+ (id)storefrontCountryCodeFromPathComponent:;
@end
