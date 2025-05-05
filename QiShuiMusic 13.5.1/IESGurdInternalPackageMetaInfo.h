@interface IESGurdInternalPackageMetaInfo : NSObject
@property (nonatomic) NSString packagePath;
@property (nonatomic) q fileType;
@property (nonatomic) q dataAccessPolicy;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) Q packageId;
@property (nonatomic) NSString bundleName;
- (void)setPackagePath:;
- (long long)dataAccessPolicy;
- (unsigned long long)packageId;
- (id)packagePath;
- (void)setDataAccessPolicy:;
- (void)setPackageId:;
- (void)setChannel:;
- (id)channel;
- (void)setFileType:;
- (id)initWithCoder:;
- (long long)fileType;
- (void)encodeWithCoder:;
- (void)setBundleName:;
- (void).cxx_destruct;
- (id)bundleName;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)metaInfoWithDictionary:;
+ (BOOL)supportsSecureCoding;
@end
