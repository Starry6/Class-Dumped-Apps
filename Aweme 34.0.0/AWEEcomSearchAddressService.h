@interface AWEEcomSearchAddressService : HTSService
@property (nonatomic) NSMutableDictionary addressInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAddressInfo:;
- (id)addressInfoWithIdentifier:;
- (void)updateAddressInfo:withIdentifier:;
- (void)removeAddressInfoWithIdentifier:;
- (id)getDefaultAddressParamsWithController:;
- (id)init;
- (void).cxx_destruct;
- (id)addressInfo;
+ (id)sharedInstance;
@end
