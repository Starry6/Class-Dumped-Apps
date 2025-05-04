@interface AWEPaySwiftImpl.CCMDeviceCertModel : MTLModel
@property (nonatomic) NSString aid;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString did;
@property (nonatomic) NSString cnID;
@property (nonatomic) NSString deviceCertInfo;
- (id)did;
- (void)setDid:;
- (id)cnID;
- (void)setCnID:;
- (id)deviceCertInfo;
- (void)setDeviceCertInfo:;
- (void)setUid:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)uid;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)aid;
- (void)setAid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
