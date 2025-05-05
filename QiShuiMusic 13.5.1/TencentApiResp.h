@interface TencentApiResp : NSObject
@property (nonatomic) q nRetCode;
@property (nonatomic) NSString sRetMsg;
@property (nonatomic) TencentApiReq objReq;
- (id)sRetMsg;
- (long long)nRetCode;
- (id)objReq;
- (void)setNRetCode:;
- (void)setObjReq:;
- (void)setSRetMsg:;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (id)respFromReq:;
+ (BOOL)supportsSecureCoding;
@end
