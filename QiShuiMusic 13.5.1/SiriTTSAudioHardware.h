@interface SiriTTSAudioHardware : NSObject
@property (nonatomic) NSString routeType;
@property (nonatomic) BOOL isBluetooth;
@property (nonatomic) BOOL isAppleProduct;
@property (nonatomic) q vendorId;
@property (nonatomic) q productId;
- (long long)productId;
- (id)routeType;
- (long long)vendorId;
- (void).cxx_destruct;
- (BOOL)isBluetooth;
- (void)fetchHardwareInfo;
- (BOOL)isAppleProduct;
+ (id)defaultOutput;
@end
