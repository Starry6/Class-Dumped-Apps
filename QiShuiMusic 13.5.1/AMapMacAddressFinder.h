@interface AMapMacAddressFinder : NSObject
@property (nonatomic) NSString AMF_macAddress;
@property (nonatomic) NSString AMF_IPAddress;
- (id)AMF_IPAddress;
- (id)AMF_macAddress;
- (id)_getMacAddressWithIP:;
- (id)initWithSignlton;
- (void)setAMF_macAddress:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
