@interface SFClientGetDeviceAssetsParams : NSObject
@property (nonatomic) S bluetoothProductID;
@property (nonatomic) I colorCode;
@property (nonatomic) NSString model;
@property (nonatomic) double timeoutSeconds;
- (id)model;
- (void)setTimeoutSeconds:;
- (double)timeoutSeconds;
- (void)setModel:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned int)colorCode;
- (void)setColorCode:;
- (unsigned short)bluetoothProductID;
- (void)setBluetoothProductID:;
+ (BOOL)supportsSecureCoding;
@end
