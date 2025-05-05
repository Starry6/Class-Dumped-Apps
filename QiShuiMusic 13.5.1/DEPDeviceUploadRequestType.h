@interface DEPDeviceUploadRequestType : NSObject
@property (nonatomic) NSString code;
@property (nonatomic) NSString name;
- (id)code;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithCode:name:;
+ (BOOL)supportsSecureCoding;
@end
