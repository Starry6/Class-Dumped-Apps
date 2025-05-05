@interface DEPDeviceUploadDeviceDetails : NSObject
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSString deviceUploadStatus;
@property (nonatomic) NSString errorMessage;
- (id)serialNumber;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)errorMessage;
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)deviceUploadStatus;
+ (BOOL)supportsSecureCoding;
@end
