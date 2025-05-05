@interface DEPDeviceUploadSubmissionResponse : NSObject
@property (nonatomic) NSString requestId;
@property (nonatomic) NSString requestStatus;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) NSArray devices;
- (id)requestId;
- (id)devices;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)errorMessage;
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)requestStatus;
- (id)_devicesFromDeviceArray:;
+ (BOOL)supportsSecureCoding;
@end
