@interface BU_IESGurdActivePackageMeta : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString md5;
@property (nonatomic) Q version;
@property (nonatomic) Q packageID;
@property (nonatomic) q packageType;
- (void)setPackageType:;
- (void)setChannel:;
- (id)channel;
- (void)setVersion:;
- (unsigned long long)version;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
- (id)md5;
- (void)setMd5:;
- (unsigned long long)packageID;
- (void)setPackageID:;
- (long long)packageType;
+ (BOOL)supportsSecureCoding;
@end
