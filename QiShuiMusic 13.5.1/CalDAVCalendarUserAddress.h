@interface CalDAVCalendarUserAddress : NSObject
@property (nonatomic) NSURL address;
@property (nonatomic) q preferred;
- (id)initWithAddress:preferred:;
- (long long)preferred;
- (void)setPreferred:;
- (void)setAddress:;
- (long long)compare:;
- (void).cxx_destruct;
- (BOOL)isSameAsUserAddressURL:;
- (id)address;
+ (id)_minPreferredAddress:;
+ (id)preferredAddress:;
+ (BOOL)compareAddressURL:localString:;
+ (id)unpackCalDAVUserAdress:;
+ (id)_preferredAddressNoPreferred:;
+ (long long)defaultPreferredAttribute;
+ (BOOL)compareAddressURL:localURL:;
+ (id)packCalDAVUserAdress:;
@end
