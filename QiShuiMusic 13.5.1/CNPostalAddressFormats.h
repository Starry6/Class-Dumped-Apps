@interface CNPostalAddressFormats : NSObject
+ (id)localizedStringForPostalAddressString:returningNilIfNotFound:;
+ (id)addressFormats;
+ (id)uncachedAddressFormats;
@end
