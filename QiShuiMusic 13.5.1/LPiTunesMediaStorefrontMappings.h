@interface LPiTunesMediaStorefrontMappings : NSObject
+ (id)storefrontIdentifierFromCountryCode:;
+ (BOOL)isValidStorefrontCountryCode:;
+ (id)defaultStorefrontCountryCode;
@end
