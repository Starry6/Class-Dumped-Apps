@interface TencentApiReq : NSObject
@property (nonatomic) q nMessageType;
@property (nonatomic) q nPlatform;
@property (nonatomic) q nSdkVersion;
@property (nonatomic) q nSeq;
@property (nonatomic) NSString sAppID;
@property (nonatomic) NSArray arrMessage;
@property (nonatomic) NSString sDescription;
- (id)arrMessage;
- (long long)nMessageType;
- (long long)nPlatform;
- (long long)nSdkVersion;
- (long long)nSeq;
- (id)sAppID;
- (id)sDescription;
- (void)setArrMessage:;
- (void)setSAppID:;
- (void)setSDescription:;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithData:type:;
+ (id)reqFromSeq:type:;
+ (BOOL)supportsSecureCoding;
@end
