@interface DEPDeviceUploadUser : NSObject
@property (nonatomic) NSString dsid;
@property (nonatomic) NSString name;
- (id)dsid;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithDsid:name:;
- (id)initWithApproverDict:;
+ (BOOL)supportsSecureCoding;
@end
