@interface DEPDeviceUploadCredentials : NSObject
@property (nonatomic) NSString dsid;
@property (nonatomic) NSString dsToken;
- (id)dsid;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithDsid:dsToken:;
- (id)dsToken;
+ (BOOL)supportsSecureCoding;
@end
