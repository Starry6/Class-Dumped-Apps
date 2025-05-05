@interface AMapSearchServiceProvider : NSObject
@property (nonatomic) NSString restServerAddress;
@property (nonatomic) NSString restServerAddressIPV6;
@property (nonatomic) NSString cloudServerAddress;
@property (nonatomic) NSString cloudServerAddressIPV6;
@property (nonatomic) NSString AOSServerAddress;
@property (nonatomic) NSString AOSServerAddressIPV6;
@property (nonatomic) NSString restServerAddressV4;
@property (nonatomic) NSString restServerAddressV4IPV6;
@property (nonatomic) NSString restServerAddressV5;
@property (nonatomic) NSString restServerAddressV5IPV6;
- (id)AOSServerAddressIPV6;
- (id)AOSServerAddress;
- (id)cloudServerAddress;
- (id)cloudServerAddressIPV6;
- (id)restServerAddress;
- (id)restServerAddressIPV6;
- (id)restServerAddressV4;
- (id)restServerAddressV4IPV6;
- (id)restServerAddressV5;
- (id)restServerAddressV5IPV6;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
