@interface AWEPaySwiftImpl.CCMQrcodePushEventMsg : MTLModel
@property (nonatomic) NSString opCmd;
@property (nonatomic) NSString aid;
@property (nonatomic) NSString did;
@property (nonatomic) NSString uid;
@property (nonatomic) q expireTime;
@property (nonatomic) NSArray trafficId;
@property (nonatomic) NSString extData;
- (id)did;
- (void)setDid:;
- (id)opCmd;
- (void)setOpCmd:;
- (id)extData;
- (void)setExtData:;
- (id)trafficId;
- (void)setTrafficId:;
- (void)setUid:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)uid;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)expireTime;
- (void)setExpireTime:;
- (id)aid;
- (void)setAid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
