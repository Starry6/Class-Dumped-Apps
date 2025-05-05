@interface AATrustedDeviceListResponse : AAResponse
@property (nonatomic) NSArray devices;
@property (nonatomic) NSNumber defaultNumberOfDevicesToShow;
- (id)devices;
- (id)defaultNumberOfDevicesToShow;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
@end
